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
public:
    Object(int posX, int posY, int sp, bool screen);
    int getPositionX() const;
    int getPositionY() const;
    int getSpeed() const;
    bool getOnScreen() const;
};


#endif //PROYECTO_1_BREAKOUT_OBJECT_H
