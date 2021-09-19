//
// Created by eduardo on 14/9/21.
//

#include "InnerBlockFactory.h"

using namespace sf;

/**
 * Method createBlock creates a rectangle and sets the attributes for an inner block
 * @author Eduardo Bolivar
 * @return block
 */
Block InnerBlockFactory::createBlock(int positionX, int positionY) {
    Block block(positionX, positionY, 0, true, 1, 30, false, false);
    block.getRect()->setSize(Vector2f(40.f, 10.f));
    block.getRect()->setFillColor(Color::Yellow);
    return block;
}