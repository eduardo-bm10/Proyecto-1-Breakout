//
// Created by eduardo on 14/9/21.
//

#include "DoubleBlockFactory.h"

using namespace sf;

/**
 * Method createBlock creates a rectangle and sets the attributes for a double block
 * @author Eduardo Bolivar
 * @return block
 */
Block DoubleBlockFactory::createBlock(int positionX, int positionY) {
    Block block(positionX, positionY, 0, true, 2, 15, false, false);
    block.getRect()->setSize(Vector2f(40.f, 10.f));
    block.getRect()->setFillColor(Color::Blue);
    return block;
}