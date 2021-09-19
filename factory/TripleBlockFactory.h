//
// Created by eduardo on 14/9/21.
//

#ifndef PROYECTO_1_BREAKOUT_TRIPLEBLOCKFACTORY_H
#define PROYECTO_1_BREAKOUT_TRIPLEBLOCKFACTORY_H


#include "BlockFactory.h"

class TripleBlockFactory: public BlockFactory {
public:
    Block createBlock(int positionX, int positionY) override;
};


#endif //PROYECTO_1_BREAKOUT_TRIPLEBLOCKFACTORY_H
