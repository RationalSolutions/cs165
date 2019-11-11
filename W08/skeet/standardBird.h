//
// Created by coby on 11/10/2019.
//

#ifndef STANDARDBIRD_H
#define STANDARDBIRD_H

#include "bird.h"
#include "uiDraw.h"

class StandardBird : public bird
{
public:
   StandardBird(){
      if(point.getY() >= 0)
      {
         velocity.setDy(velocity.getDy() - random(0,4));
      }
      else if (point.getY() < 0)
      {
         velocity.setDy(velocity.getDy() + random(0,4));
      }
      velocity.setDx(velocity.getDx() + random(3,6));
   }

   void advance(); // TODO: add randomization to advancement script?
   void draw();
   int hit();

};


#endif //STANDARDBIRD_H
