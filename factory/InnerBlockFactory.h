//
// Created by eduardo on 14/9/21.
//

#ifndef PROYECTO_1_BREAKOUT_INNERBLOCKFACTORY_H
#define PROYECTO_1_BREAKOUT_INNERBLOCKFACTORY_H


#include "BlockFactory.h"

class InnerBlockFactory: public BlockFactory {
public:
    Block createBlock() override;
};


#endif //PROYECTO_1_BREAKOUT_INNERBLOCKFACTORY_H
