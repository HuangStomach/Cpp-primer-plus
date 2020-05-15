#include <iostream>
#include "4.stack.h"

int main(int argc, char const *argv[]) {
    Item item;
    Stack stack = Stack();
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    Stack backup = stack;
    backup.pop(item);
    std::cout << item << std::endl;
    backup.pop(item);
    std::cout << item << std::endl;
    backup.pop(item);
    std::cout << item << std::endl;
    backup.pop(item);
    std::cout << item << std::endl;

    return 0;
}
