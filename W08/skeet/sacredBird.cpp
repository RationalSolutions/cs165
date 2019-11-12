//
// Created by coby on 11/10/2019.
//

#include "sacredBird.h"
//TODO: create sacredBird that extends bird


void SacredBird::advance()
{
   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy() + random(-2,2));
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