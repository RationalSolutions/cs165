###############################################################
# Program:
#     Project 09, Skeet
#     Brother Alvey, CS165
# Author:
#     Coby Jenkins
# Summary:
#     Put your summary code here... 
# Above and Beyond
#     Features added:
#           1. Added game over condition upon when the player hit a score of
#               -10 the game will draw Game Over on the screen and won't proceed
#           2. Created a superBird class whose behavior is dependent upon the
#               current score of the game. The higher the score the more erratic movement
#               and higher the speed range, but also higher the points awarded.
#                  -Note that this required the creation of the drawSuperBird
#                   class in the uiDraw class this was done by copying the
#                   drawToughBird method and some customization to the draw()
#                   method called by the superBird class.
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o rifle.o velocity.o projectile.o bullet.o bird.o standardBird.o toughBird.o sacredBird.o superBird.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o rifle.o velocity.o projectile.o bullet.o bird.o standardBird.o toughBird.o sacredBird.o superBird.o $(LFLAGS)

###############################################################
# Individual files
#    uiDraw.o      Draw polygons on the screen and do all OpenGL graphics
#    uiInteract.o  Handles input events
#    point.o       The position on the screen
#    ground.o      Handles the ground / world
#    game.o        Handles the game interaction
###############################################################
uiDraw.o: uiDraw.cpp uiDraw.h point.h
	g++ -c uiDraw.cpp

uiInteract.o: uiInteract.cpp uiInteract.h
	g++ -c uiInteract.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

game.o: game.cpp uiDraw.h uiInteract.h point.h rifle.h bullet.h bird.h
	g++ -c game.cpp

driver.o: game.h uiInteract.h driver.cpp
	g++ -c driver.cpp

rifle.o: rifle.h point.h uiDraw.h rifle.cpp
	g++ -c rifle.cpp
#######################################################################
# ADD YOUR ADDITIONAL RULES HERE!
#   velocity.o      handles velocity
#   projectile.o    super class for bird/bullet
#   bullet.o        handles bullets
#   bird.o          handles super class for birds
#   standardBird.o  handles the standard bird
#   toughBird.o     handles the tough bird
#   sacredBird.o    handles the sacred bird
#   superBird.o     handles the super bird
# Then, don't forget to add them to the dependency list for a.out above.
#######################################################################
velocity.o: velocity.cpp velocity.h
	g++ -c velocity.cpp

projectile.o: projectile.cpp projectile.h point.h velocity.h
	g++ -c projectile.cpp

bullet.o: bullet.cpp bullet.h projectile.h
	g++ -c bullet.cpp

bird.o: bird.cpp bird.h projectile.h uiDraw.h
	g++ -c bird.cpp

standardBird.o: standardBird.cpp standardBird.h bird.h uiDraw.h
	g++ -c standardBird.cpp

toughBird.o: toughBird.cpp toughBird.h bird.h uiDraw.h
	g++ -c toughBird.cpp

sacredBird.o: sacredBird.cpp sacredBird.h bird.h uiDraw.h
	g++ -c sacredBird.cpp

superBird.o: superBird.cpp superBird.h bird.h uiDraw.h
	g++ -c superBird.cpp
###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o
