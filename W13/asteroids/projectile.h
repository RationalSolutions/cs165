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
   int lives;
   int score;
   int bonus;

public:
   Projectile() : alive(true), score(1), bonus(0), lives(1) {}
   virtual ~Projectile(){}

   void setVelocity(const Velocity & velocity){this->velocity = velocity;}
   void setPoint(const Point & point){this->point = point;}
   void setAlive(bool alive){this->alive = alive;}
   void setLives(int lives){this->lives = lives;}
   void kill() {alive = false;}

   virtual void advance();
   virtual void draw() = 0;

   Velocity getVelocity(){ return velocity;}
   Point getPoint(){ return point;}
   bool isAlive(){ return alive;}
   int getLives(){ return lives;}
   int hit();
};

#endif //PROJECTILE_H
