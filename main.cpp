#include "source/Game.h"

/**
 * Method main runs the C++ program.
 * Creates an instante of game and keeps running it.
 * @return 0
 */
int main() {
    ///Init game object
    Game game;
    ///Game loop
    while (game.isRunning()) {
        ///Update new things on screen
        game.update();
        ///Show those new things on screen
        game.render();
    }
}
