#include "1.golf.h"
#include <iostream>
#include <string>

void setgolf(golf & g, const char * name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g) {
    using std::cout;
    using std::cin;
    using std::string;
    cout << "Plz entrer name: ";
    string str;
    getline(cin, str);
    strcpy(g.fullname, str.c_str());
    cout << "Plz entrer handicap: ";
    cin >> g.handicap;

    return strlen(g.fullname) > 0 ? 1 : 0;
}

void handicap(golf & g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf & g) {
    using std::cout;
    using std::endl;
    cout << "name: " << g.fullname << endl;
    cout << "handicap: " << g.handicap << endl;
}
