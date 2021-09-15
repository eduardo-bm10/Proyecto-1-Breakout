//
// Created by eduardo on 14/9/21.
//

#ifndef PROYECTO_1_BREAKOUT_BLOCKFACTORY_H
#define PROYECTO_1_BREAKOUT_BLOCKFACTORY_H
#include "../objects/Block.h"


class BlockFactory {
protected:
    virtual Block createBlock();
};


#endif //PROYECTO_1_BREAKOUT_BLOCKFACTORY_H
