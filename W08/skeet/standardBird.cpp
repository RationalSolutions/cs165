//
// Created by coby on 11/10/2019.
//

#include "standardBird.h"

void StandardBird::advance()
{
   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy() + random(-2,2));
}

void StandardBird::draw()
{
   drawCircle(point, 15);
}

int StandardBird::hit()
{
   kill();
   return 1;
}

