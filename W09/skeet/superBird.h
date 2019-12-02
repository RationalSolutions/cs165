//
// Created by coby on 11/18/2019.
//

#ifndef SUPERBIRD_H
#define SUPERBIRD_H

#include "bird.h"
#include "uiDraw.h"

class SuperBird : public Bird
{
private:
   int seed;

public:
   SuperBird()
   {
      setSeed(5);
      lives = 5;


      if (point.getY() >= 0)
      {
         velocity.setDy(velocity.getDy() - random(0, 1 + seed));
      } else if (point.getY() < 0)
      {
         velocity.setDy(velocity.getDy() + random(0, 1 + seed));
      }
      velocity.setDx(velocity.getDx() + random(2, 3 + seed));
   };

   SuperBird(int seed)
   {
      setSeed(seed);
      lives = 5;

      if (point.getY() >= 0)
      {
         velocity.setDy(velocity.getDy() - random(0, 1 + seed));
      } else if (point.getY() < 0)
      {
         velocity.setDy(velocity.getDy() + random(0, 1 + seed));
      }
      velocity.setDx(velocity.getDx() + random(2, 3 + seed));
   };

   void advance();
   void draw();
   int hit();

   void setSeed(int seed){this->seed = seed;}
   int getSeed(){ return seed;}
};


#endif //SUPERBIRD_H
