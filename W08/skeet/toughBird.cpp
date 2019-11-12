//
// Created by coby on 11/10/2019.
//

#include "toughBird.h"

void ToughBird::advance() //TODO: create toughBird that extends bird
{
   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy() + random(-2,2));
}

void ToughBird::draw()
{
   drawToughBird(point, 15, lives);
}

int ToughBird::hit()
{
   lives--;
   if(lives == 0)
   {
      kill();
      return 3;
   }
   return 1;
}