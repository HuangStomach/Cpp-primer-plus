#include "6.move.h"
#include <iostream>

Move::Move(double a, double b) {
    this->x = a;
    this->y = b;
}

void Move::showmove() const {
    std::cout << this->x << ", " << this->y << std::endl;
}

Move Move::add(const Move & m) const {
    Move move = Move(this->x + m.x, this->y + m.y);
    return move;
}

void Move::reset(double a, double b) {
    this->x = a;
    this->y = b;
}
