#include <iostream>
#include <cstring>

using namespace std;
struct stringy {
    char * str;
    int ct;
};
void set(stringy &, char *);
void show(char *, int = 1);
void show(stringy, int = 1);

int main(int argc, char const *argv[]) {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}

void set(stringy & s, char * str) {
    s.str = new char[strlen(str) + 1];
    s.ct = strlen(str);
    strcpy(s.str, str);
}

void show(stringy s, int l) {
    for (int i = 0; i < l; i++) {
        cout << s.ct << ": " << s.str << endl;
    }
}

void show(char * s, int l) {
    for (int i = 0; i < l; i++) {
        cout << s << endl;
    }
}