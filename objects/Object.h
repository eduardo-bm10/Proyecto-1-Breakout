//
// Created by eduardo on 18/9/21.
//

#ifndef PROYECTO_1_BREAKOUT_OBJECT_H
#define PROYECTO_1_BREAKOUT_OBJECT_H


class Object {
protected:
    int positionX, positionY;
    int speed;
    bool onScreen;
    virtual void movement();
public:
    Object(int posX, int posY, int sp, bool screen);
};


#endif //PROYECTO_1_BREAKOUT_OBJECT_H
