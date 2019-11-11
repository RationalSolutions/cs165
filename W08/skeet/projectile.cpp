//
// Created by coby on 11/10/2019.
//

#include "projectile.h"

void Projectile::advance()
{
   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy());
}