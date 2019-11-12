//
// Created by coby on 11/10/2019.
//

#include "bullet.h"

#define BULLET_SPEED 10.0

void Bullet::fire(Point point, float angle)
{
   this->point = point;

   float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
   float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));

   velocity.setDx(velocity.getDx() + dx);
   velocity.setDy(velocity.getDy() + dy);
}

void Bullet::advance()
{
   point.setX(point.getX() + velocity.getDx());
   point.setY(point.getY() + velocity.getDy());
}