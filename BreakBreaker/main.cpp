//Made by Nick Gaston, Ryan S, Israel Avilez

#include <QApplication>
#include "Game.h"

/*Issues:
 1. Return statement needed? ball.cpp line 103
 2. Fix the ball removing two blocks at a time
*/

/*
 Things to add or consider:
 1. Intro screen / menu
 2. Outro screen once you have won the game
 3. Plate for paddle (current method is drawing a shape for paddle from img)
 4. Look at Ball.cpp for info regarding using a circle for ball or using an omellete
 */

Game* game;

int main(int argc, char *argv[]) //These are command-line parameters, argc means an array of c-string pointers and argv specifies the number of elements within argv or the number of c-string pointers pointed to by argv
{
    QApplication a(argc, argv);

    game = new Game();
    game->show();
    game->start();

    return a.exec(); //exec() functions replace the current process image with a new process image
}
