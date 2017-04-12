#ifndef ORBOX_BLOCK_H
#define ORBOX_BLOCK_H

#include "Coordinate.h"
#include "Color.h"

class Block {
    bool target_;
    bool blocking_;
    bool visible_;
    int strength_;

    Color color_;
    Coordinate* pos_;

public:
    Block();
    Coordinate getPosition();
    Color getColor();
    int getStrength();
    bool isTarget();
    bool isBlocking();
    bool isVisible();
    void hitBlock();
    void setVisible();
};

#endif //ORBOX_BLOCK_H
