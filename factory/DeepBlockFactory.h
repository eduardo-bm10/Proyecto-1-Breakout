//
// Created by eduardo on 14/9/21.
//

#ifndef PROYECTO_1_BREAKOUT_DEEPBLOCKFACTORY_H
#define PROYECTO_1_BREAKOUT_DEEPBLOCKFACTORY_H


#include "BlockFactory.h"

class DeepBlockFactory: public BlockFactory {
public:
    Block createBlock() override;
};


#endif //PROYECTO_1_BREAKOUT_DEEPBLOCKFACTORY_H
