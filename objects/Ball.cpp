//
// Created by eduardo on 14/9/21.
//

#include "Ball.h"

Ball::Ball(int posX, int posY, int sp, bool screen) : Object(posX, posY, sp, screen) {
    initBall(posX, posY);
    this->id = id1++;
    this->RIGHT = true;
    this->UP = true;
}

Ball::~Ball() {
    delete this->myBall;
}

void Ball::initBall(int posX, int posY) {
    this->myBall = new CircleShape(10.f);
    myBall->setFillColor(Color::White);
    myBall->setPosition((float) posX, (float) posY);
    myBall->setOutlineColor(Color::Black);
}

void Ball::movement_X() {
    while (this->onScreen) {
        while (this->positionX > 0 && RIGHT) {
            if (this->positionX >= 800) {
                RIGHT = false;
            }
            myBall->setPosition((float) (this->positionX + this->speed), (float) this->positionY);
        }
        while (this->positionX < 800 && !RIGHT) {
            if (this->positionX <= 0) {
                RIGHT = true;
            }
            myBall->setPosition((float) (this->positionX - this->speed), (float) this->positionY);
        }
    }
}

void Ball::movement_Y() {
    while (this->onScreen) {
        while (this->positionY > 0 && UP) {
            for (Block b : Game::blocks) {
                if (Game::collision(b)) {
                    this->UP = false;
                    continue;
                }
            }
            myBall->setPosition((float) this->positionX, (float) (this->positionY + this->speed));
        }
        while (this->positionY < 600 && !UP) {
            if (Game::collision(Game::myBar)) {
                this->UP = true;
            }
            myBall->setPosition((float) this->positionX, (float) (this->positionY - this->speed));
        }
    }
}