#include "3.golf.h"
#include <iostream>
#include <string>

Golf::Golf() {
    using std::cout;
    using std::cin;
    using std::string;
    cout << "Plz entrer name: ";
    string str;
    getline(cin, str);
    strcpy(this->fullname, str.c_str());
    cout << "Plz entrer handicap: ";
    cin >> this->handicap;
}

Golf::Golf(const char * name, int hc) {
    strcpy(this->fullname, name);
    this->handicap = hc;
}

void Golf::setHandicap(int hc) {
    this->handicap = hc;
}

void Golf::show() const {
    using std::cout;
    using std::endl;
    cout << "name: " << this->fullname << endl;
    cout << "handicap: " << this->handicap << endl;
}
