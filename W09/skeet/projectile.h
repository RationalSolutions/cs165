//
// Created by coby on 11/10/2019.
//

#ifndef PROJECTILE_H
#define PROJECTILE_H

#include "point.h"
#include "velocity.h"

using namespace std;
class Projectile
{
protected:
   Point point;
   Velocity velocity;
   bool alive;

public:
   Projectile(){}
   virtual ~Projectile(){}

   void setVelocity(const Velocity & velocity){this->velocity = velocity;}
   void setPoint(const Point & point){this->point = point;}
   void setAlive(bool alive){this->alive = alive;}
   void kill() {alive = false;}

   virtual void advance();
   virtual void draw() = 0;

   Velocity getVelocity(){ return velocity;}
   Point getPoint(){ return point;}
   bool isAlive(){ return alive;}
};

#endif //PROJECTILE_H
