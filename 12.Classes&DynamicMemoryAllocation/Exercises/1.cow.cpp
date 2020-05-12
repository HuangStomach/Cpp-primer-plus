#include "1.cow.h"
#include <iostream>

Cow::Cow() {
    strcpy(name, "");
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt) {
    strcpy(name, nm);
    hobby = new char[strlen(ho)];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c) {
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby)];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow() {
    delete[] hobby;
}

Cow & Cow::operator=(const Cow & c) {
    if (this == &c) return *this;
    delete[] hobby;
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby)];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const {
    std::cout << name << " " << hobby << " " << weight << std::endl;
}
