//
// Created by coby on 11/10/2019.
//

#ifndef SACREDBIRD_H
#define SACREDBIRD_H

#include "bird.h"
#include "uiDraw.h"

class SacredBird : public bird
{
public:
   SacredBird()
   {
      if(point.getY() >= 0)
      {
         velocity.setDy(velocity.getDy() - random(-4,4));
      }
      else if (point.getY() < 0)
      {
         velocity.setDy(velocity.getDy() + random(-4,4));
      }
      velocity.setDx(velocity.getDx() + random(2,6));
   }

   void advance(); // TODO: add randomization to advancement script?
   void draw();
   int hit();
};


#endif //SACREDBIRD_H
