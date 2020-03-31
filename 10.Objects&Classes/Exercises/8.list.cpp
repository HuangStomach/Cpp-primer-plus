  #include "8.list.h"
#include <iostream>

List::List() {
    this->num = 0;
}

bool List::isEmpty() const {
    return num == 0;
}

bool List::isFull() const {
    return num == MAX;
}

int List::count() const {
    return num;
}

bool List::add(const Item & item) {
    if (isFull()) std::cout << "full already" << std::endl;
    else items[++num] = item;
}

void List::visit(void (*pf)(Item &)) {
    for (int i = 0; i < num; ++i) (*pf)(items[i]);
}