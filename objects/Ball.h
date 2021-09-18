//
// Created by eduardo on 14/9/21.
//

#ifndef PROYECTO_1_BREAKOUT_BALL_H
#define PROYECTO_1_BREAKOUT_BALL_H

#include "SFML/Graphics.hpp"
#include "Block.h"
#include "Object.h"

using namespace sf;

class Ball:public Object {
private:
    Ball(int posX1, int posY1, int sp1, bool screen1);

    CircleShape* myBall;
    bool RIGHT, UP;
    void initBall(int posX, int posY);
public:
    Ball(int posX1, int posY1, int sp1, bool screen1, int posX, int posY, int sp, bool screen) : Object(int posX, int posY, int sp, bool screen);
    ~Ball();
    void movement_Y();
    void movement_X();
    bool collide(Object o);
};


#endif //PROYECTO_1_BREAKOUT_BALL_H
