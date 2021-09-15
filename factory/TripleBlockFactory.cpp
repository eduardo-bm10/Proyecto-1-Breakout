//
// Created by eduardo on 14/9/21.
//

#include "TripleBlockFactory.h"

using namespace sf;

/**
 * Method createBlock creates a rectangle and sets the attributes for a triple block
 * @author Eduardo Bolivar
 * @return block
 */
Block TripleBlockFactory::createBlock() {
    Block block(3,20,false,false);
    block.getRect()->setSize(Vector2f(40.f, 10.f));
    block.getRect()->setFillColor(Color::Red);
    return block;
}