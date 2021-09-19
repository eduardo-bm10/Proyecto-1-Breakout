//
// Created by eduardo on 14/9/21.
//

#ifndef PROYECTO_1_BREAKOUT_GAME_H
#define PROYECTO_1_BREAKOUT_GAME_H

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/Audio.hpp"
#include "SFML/System.hpp"
#include "SFML/Network.hpp"
#include "../objects/Bar.h"
#include "../objects/Block.h"

using namespace sf;

/**
 * Game: main class of the game engine.
 * Provides the main window and the main methods of the visuals.
 * @author Eduardo Bolivar
 */
class Game {
private:
    RenderWindow* window;
    Event ev;
    VideoMode videoMode;
    void initWindow();
    void initBlocks();
public:
    static Block blocks[100];
    static Bar myBar;
    Game();
    ~Game();
    bool isRunning();
    static bool collision(Object o);
    void update();
    void render();
};


#endif //PROYECTO_1_BREAKOUT_GAME_H
