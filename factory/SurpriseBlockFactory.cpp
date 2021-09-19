//
// Created by eduardo on 14/9/21.
//

#include "SurpriseBlockFactory.h"

Block SurpriseBlockFactory::createBlock(int positionX, int positionY) {
    Block block(positionX, positionY, 0, false, 10, 0, false, true);
    block.getRect()->setSize(Vector2f(50.f,80.f));
    block.getRect()->setFillColor(Color::Transparent);
    block.getRect()->setOutlineColor(Color::White);
    return block;
}
