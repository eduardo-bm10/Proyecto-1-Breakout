//
// Created by eduardo on 14/9/21.
//

#include "DeepBlockFactory.h"

using namespace sf;

/**
 * Method createBlock creates a rectangle and sets the attributes for a deep block
 * @author Eduardo Bolivar
 * @return block
 */
Block DeepBlockFactory::createBlock(int positionX, int positionY) {
    Block block(positionX, positionY, 0, true, 10, 0, true, false);
    block.getRect()->setSize(Vector2f(40.f, 10.f));
    block.getRect()->setFillColor(Color::White);
    return block;
}