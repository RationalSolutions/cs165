/*********************************************************************
 * File: game.h
 * Description: Defines the game class for Asteroids
 *
 *********************************************************************/

#ifndef GAME_H
#define GAME_H

#include <vector>

#include "uiDraw.h"
#include "uiInteract.h"
#include "point.h"
#include "velocity.h"
#include "ship.h"
#include "rocks.h"
#include "bullet.h"
using namespace std;

#define CLOSE_ENOUGH 15

class Game
{
private:
   Point tLeft;
   Point bRight;
   Ship ship;
   vector<Bullet> bullets;
   vector<Rock*> asteroids;
   int score;
   bool gameOver;
};

#endif /* GAME_H */
