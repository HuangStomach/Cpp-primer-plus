#include "7.plorg.h"
#include <iostream>

Plorg::Plorg(const char * name, int ci) {
    strcpy(this->name, name);
    this->ci = ci;
}

void Plorg::setCi(int ci) {
    this->ci = ci;
}

void Plorg::show() const {
    std::cout << this->name << ": " << this->ci << std::endl;
}