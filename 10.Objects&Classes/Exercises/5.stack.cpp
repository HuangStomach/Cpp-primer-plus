#include "5.stack.h"
#include <iostream>

Stack::Stack() {
    top = 0;
}

bool Stack::isempty() const {
    return top == 0;
}

bool Stack::isfull() const {
    return top == MAX;
}

bool Stack::push(const Item & item) {
    if (top < MAX) {
        items[top++] = item;
        return true;
    }
    else return false;
}

bool Stack::pop(Item & item) {
    if (top > 0) {
        item = items[--top];
        total += item.payment;
        std::cout << total << std::endl;
        return true;
    }
    else return false;
}
