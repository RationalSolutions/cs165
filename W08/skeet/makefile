###############################################################
# Program:
#     Milestone 08, Skeet
#     Brother Alvey, CS165
# Author:
#     Coby Jenkins
# Summary:
#     Put your summary code here... 
# Above and Beyond
#     When you submit your final project (not for milestones),
#     list anything here that you did to go above and beyond
#     the base requirements for your project.
###############################################################


LFLAGS = -lglut -lGLU -lGL

###############################################################
# Build the main game
###############################################################
a.out: driver.o game.o uiInteract.o uiDraw.o point.o rifle.o velocity.o projectile.o bullet.o bird.o standardBird.o toughBird.o sacredBird.o
	g++ driver.o game.o uiInteract.o uiDraw.o point.o rifle.o velocity.o projectile.o bullet.o bird.o standardBird.o toughBird.o sacredBird.o $(LFLAGS)

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
###############################################################
# General rules
###############################################################
clean:
	rm a.out *.o
