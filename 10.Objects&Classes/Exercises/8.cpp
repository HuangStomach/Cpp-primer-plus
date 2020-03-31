#include <iostream>
#include "8.list.h"

void show(Item & item);

int main() {
    List l;
    Item i = {"Mark", 24};
    l.add(i);
    
    std::cout << l.count() << " items in list" << std::endl;
    l.visit(show);

    return 0;
}

void show(Item & item) {
    std::cout << item.pages << std::endl;
}