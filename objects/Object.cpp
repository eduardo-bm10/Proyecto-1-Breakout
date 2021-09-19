//
// Created by eduardo on 18/9/21.
//

#include "Object.h"

Object::Object(int posX, int posY, int sp, bool screen) {
    this->positionX = posX;
    this->positionY = posY;
    this->speed = sp;
    this->onScreen = screen;
}

int Object::getPositionX() const {
    return this->positionX;
}

int Object::getPositionY() const {
    return this->positionY;
}

int Object::getSpeed() const {
    return this->speed;
}

bool Object::getOnScreen() const {
    return this->onScreen;
}