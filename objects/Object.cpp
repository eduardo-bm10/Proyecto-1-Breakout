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