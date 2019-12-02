//
// Created by coby on 11/10/2019.
//

#ifndef TOUGHBIRD_H
#define TOUGHBIRD_H

#include "bird.h"

class ToughBird : public Bird
{
public:
   ToughBird()
   {
      lives = 3;
      if(point.getY() >= 0)
      {
         velocity.setDy(velocity.getDy() - random(0,3));
      }
      else if (point.getY() < 0)
      {
         velocity.setDy(velocity.getDy() + random(0,3));
      }
      velocity.setDx(velocity.getDx() + random(2,4));
   }

   void advance(); // TODO: add randomization to advancement script?
   void draw();
   int hit();
};


#endif //TOUGHBIRD_H
