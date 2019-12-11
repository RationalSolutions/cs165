//
// Created by coby on 11/10/2019.
//

#ifndef CS165_BULLET_H
#define CS165_BULLET_H

#define BULLET_SPEED 5
#define BULLET_LIFE 40

#include "projectile.h"
#include "uiDraw.h"

#include <cmath>

class Bullet : public Projectile
{
private:
   float angle;

public:
   Bullet(){
      alive = true;
   }

   void fire(Point point, float angle);
   void draw(){drawDot(point);}
   void advance();
};

#endif //CS165_BULLET_H
