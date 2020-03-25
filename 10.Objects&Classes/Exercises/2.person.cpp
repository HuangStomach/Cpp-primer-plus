#include "2.person.h"
#include <iostream>

Person::Person() {
    lname = "";
    fname[0] = '\0';
}

Person::Person(const std::string & ln, const char * fn) {
    this->lname = ln;
    strcpy(this->fname, fn);
}

void Person::Show() const {
    std::cout << this->fname << " " << this->lname << std::endl;
}

void Person::FormalShow() const {
    std::cout << this->lname << ", " << this->fname << std::endl;
}