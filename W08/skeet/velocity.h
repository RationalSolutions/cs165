/***********************************************************************
 * Header File:
 *    Velocity : The representation of velocity for the game
 * Author:
 *    Coby Jenkins
 * Summary:
 *    Defines velocity as the change in x vs the change in y or more commonly
 *         known as dy/dx. delta(y)/delta(x)
 ************************************************************************/

#ifndef VELOCITY_H
#define VELOCITY_H


class Velocity
{
private:
   float dx;
   float dy;

public:
   float getDx() const { return dx;};
   float getDy() const { return dy;};

   void setDx(float x){dx = x;};
   void setDy(float y){dy = y;};

   Velocity()
   {
      setDx(0);
      setDy(0);
   }

   Velocity(float x, float y)
   {
      setDx(x);
      setDy(y);
   }
};


#endif
