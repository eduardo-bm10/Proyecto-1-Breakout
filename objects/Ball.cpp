//
// Created by eduardo on 14/9/21.
//

#include "Ball.h"

Ball::Ball(int posX1, int posY1, int sp1, bool screen1) : Object(posX1, posY1, sp1, screen1) {
    initBall(posX1, posY1);
    this->RIGHT = true;
    this->UP = true;
}

Ball::~Ball() {
    delete this->myBall;
}

void Ball::initBall(int posX, int posY) {
    this->positionX = posX;
    this->positionY = posY;
    this->myBall = new CircleShape(10.f);
    myBall->setFillColor(Color::White);
    myBall->setPosition((float) posX, (float) posY);
    myBall->setOutlineColor(Color::Black);
}

void Ball::movement_Y() {
    while (this->onScreen) {
        while (this->positionY > 0 && UP) {
            if (collide(blocks)) {
                this->UP = false;
                continue;
            }
            this-> positionY += 10;
            myBall->setPosition(this->positionX, this->positionY);
            movement_X();
        }
        while (this->positionY < 600 && !UP) {
            if (collide(myBar)) {
                this->UP = true;
                continue;
            }
            this->positionY -= 10;
            myBall->setPosition(this->positionX, this->positionY);
            movement_X();
        }
    }
}