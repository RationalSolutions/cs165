//
// Created by coby on 11/10/2019.
//

#include "standardBird.h"

void StandardBird::advance()
{

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

