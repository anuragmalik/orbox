

#include "block.h"

Block::Block() {

}

Coordinate Block::getPosition() {
    return Coordinate();
}

Color Block::getColor() {
    Color result;
    return result;
}

bool Block::isTarget() {
    return false;
}

bool Block::isBlocking() {
    return false;
}

bool Block::isVisible() {
    return false;
}

int Block::getStrength() {
    return 0;
}

void Block::setVisible() {

}

void Block::hitBlock() {

}
