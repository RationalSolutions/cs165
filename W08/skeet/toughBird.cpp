//
// Created by coby on 11/10/2019.
//

#include "toughBird.h"

void ToughBird::advance() //TODO: create toughBird that extends bird
{

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