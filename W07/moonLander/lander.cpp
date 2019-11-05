/*************************************************************
 * File: lander.cpp
 * Author: Coby Jenkins
 *
 * Description: Contains the implementations of the
 *  method bodies for the lander class.
 *
 * This file will contain input validation for the lander set functions in
 *      the future.
 *************************************************************/
#include "lander.h"

/***************************************
* LANDER :: APPLY GRAVITY
* Applies gravitational force on the
* ship, pulling it downward.
***************************************/
void Lander::applyGravity(float gravity)
{
   landerVel.setDy (landerVel.getDy () - gravity);
}

/***************************************
* LANDER :: APPLY THRUST LEFT
* Applies thrust on the left of the
* ship to propel it to the right.
***************************************/
void Lander::applyThrustLeft()
{
   if (canThrust ())
   {
      landerVel.setDx (landerVel.getDx () + HOR_THRUST);
      setFuel (getFuel () - HOR_FUEL_COST);
      drawLanderFlames (position, false, true, false);
   }
}

/***************************************
* LANDER :: APPLY THRUST RIGHT
* Applies thrust on the right of the
* ship to propel it to the left.
***************************************/
void Lander::applyThrustRight()
{
   if (canThrust ())
   {
      landerVel.setDx (landerVel.getDx () - HOR_THRUST);
      setFuel (getFuel () - HOR_FUEL_COST);
      drawLanderFlames (position, false, false, true);
   }
}

/***************************************
* LANDER :: APPLY THRUST BOTTOM
* Applies thrust on the bottom of the
* ship to propel it upward.
***************************************/
void Lander::applyThrustBottom()
{
   if (canThrust () && (getFuel () >= VER_FUEL_COST))
   {
      landerVel.setDx (landerVel.getDx () + VER_THRUST);
      setFuel (getFuel () - VER_FUEL_COST);
      drawLanderFlames (position, true, false, false);
   }
}

/***************************************
* LANDER :: ADVANCE
* Advances the LANDERs movement in a
* given direction.
***************************************/
void Lander::advance()
{
   position.setX (position.getX () + landerVel.getDx ());
   position.setY (position.getY () + landerVel.getDy ());
}

/***************************************
* LANDER :: DRAW
* Draws the ships body to the interface.
***************************************/
void Lander::draw()
{
   drawLander (position);
}