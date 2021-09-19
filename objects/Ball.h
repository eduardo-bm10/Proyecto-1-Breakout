//
// Created by eduardo on 14/9/21.
//

#ifndef PROYECTO_1_BREAKOUT_BALL_H
#define PROYECTO_1_BREAKOUT_BALL_H

#include "../source/Game.h"
#include "SFML/Graphics.hpp"
#include "Block.h"
#include "Object.h"

using namespace sf;

class Ball:public Object {
private:
    int id;
    CircleShape* myBall;
    bool RIGHT, UP;
    void initBall(int posX, int posY);
public:
    static int id1;
    Ball(int posX, int posY, int sp, bool screen);
    ~Ball();
    void movement_Y();
    void movement_X();
};


#endif //PROYECTO_1_BREAKOUT_BALL_H
