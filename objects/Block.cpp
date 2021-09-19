//
// Created by eduardo on 14/9/21.
//

#include "Block.h"

Block::Block(int posX, int posY, int sp, bool screen, int lives1, int points1, bool deep1, bool surprise1) : Object(posX, posY, sp, screen) {
    this->rect = new RectangleShape(Vector2f(50.f, 80.f));
    this->id = id1++;
    this->lives = lives1;
    this->points = points1;
    this->deep = deep1;
    this->surprise = surprise1;
}

void Block::hit() {
    this->lives--;
}

void Block::destroy() {
    delete this->rect;
    delete this;
}

bool Block::isDeep() const {
    return this->deep;
}

bool Block::isSurprise() const {
    return this->surprise;
}

int Block::getPoints() const {
    return this->points;
}

int Block::getLives() const {
    return this->lives;
}

RectangleShape *Block::getRect() {
    return this->rect;
}


