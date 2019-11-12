#ifndef BIRD_H
#define BIRD_H

#include "uiDraw.h"
#include "projectile.h"

using namespace std;

class Bird : public Projectile
{
protected:
   int lives;

public:
   Bird()
   {
      setPoint(Point(-200, random(-200, 200)));
      velocity.setDx(velocity.getDx() + .1);
      alive = true;
   }

   Bird(Point &point)
   {
      this->point = point;
      velocity.setDx(velocity.getDx() + .1);
      alive = true;
   }

   virtual void draw() = 0;
   virtual void advance() = 0;
   virtual int hit() = 0;
};


#endif //BIRD_H
