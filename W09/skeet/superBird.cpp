//
// Created by coby on 11/18/2019.
//

#include "superBird.h"

void SuperBird::advance()
{
   int upperBound = getSeed();
   int lowerBound = -1 * upperBound;

   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy() + random(-1 + lowerBound,
         1 + upperBound));
}

void SuperBird::draw()
{
   float x = .3 * (float)getSeed();
   drawSuperBird(point, 15 + x, lives);
}

int SuperBird::hit()
{
   lives--;
   if(lives == 0)
   {
      kill();
      return 3 + (int)(.3 * seed);
   }
   return 1 + (int)(.1 * seed);
}