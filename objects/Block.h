//
// Created by eduardo on 14/9/21.
//

#ifndef PROYECTO_1_BREAKOUT_BLOCK_H
#define PROYECTO_1_BREAKOUT_BLOCK_H

#include "SFML/Graphics.hpp"
#include "Object.h"

using namespace sf;

/**
 * Class Block creates objects for the blocks that need to be destroyed.
 * Provides an array of block objects, and a constructor to define shapes and color of blocks.
 */
class Block:public Object {
private:
    int id;
    RectangleShape* rect;
    int points;
    int lives;
    bool deep;
    bool surprise;
public:
    static int id1;
    Block(int posX, int posY, int sp, bool screen, int lives1, int points1, bool deep1, bool surprise1);
    void hit();
    void destroy();
    bool isDeep() const;
    bool isSurprise() const;
    int getPoints() const;
    int getLives() const;
    RectangleShape* getRect();
};


#endif //PROYECTO_1_BREAKOUT_BLOCK_H
