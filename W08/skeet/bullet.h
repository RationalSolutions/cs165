//
// Created by coby on 11/10/2019.
//

#ifndef CS165_BULLET_H
#define CS165_BULLET_H

#include "projectile.h"
#include "uiDraw.h"

#include <cmath>

class Bullet : public projectile
{
public:
   Bullet(){
      alive = true;
   }

   void fire(Point & point, float angle);
   void draw(){drawDot(point);}
};

#endif //CS165_BULLET_H
