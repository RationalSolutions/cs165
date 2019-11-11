//
// Created by coby on 11/10/2019.
//

#include "sacredBird.h"
//TODO: create sacredBird that extends bird


void SacredBird::advance()
{

}

void SacredBird::draw()
{
   drawSacredBird(point, 15);
}

int SacredBird::hit()
{
   kill();
   return -10;
}