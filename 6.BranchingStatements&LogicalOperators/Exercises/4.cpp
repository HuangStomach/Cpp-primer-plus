#include <iostream>

using namespace std;
const int strsize = 80;

struct Bop {
    char full[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main(int argc, char const *argv[]) {
    Bop bops[4] = {
        {"A", "tA", "bA", 0},
        {"B", "tB", "bB", 1},
        {"C", "tC", "bC", 2},
        {"D", "tD", "bD", 0},
    };
    
    cout << "Plz enter display by: " << endl;
    cout << "a) name        b) title" << endl;
    cout << "c) bopname     d) preference" << endl;
    cout << "q) quit" << endl;

    char c;
    char opts[3] = {'a', 'b', 'c'};
    cout << "Plz enter: " << endl;
    cin >> c;

    while (c != 'q') {
        while (cin.get() != '\n') continue;
        if (c != 'a' && c != 'b' && c != 'c' && c != 'd') goto cont;

        for (int i = 0; i < 4; i++) {
            char cc = c;
            if (c == 'd') cc = opts[bops[i].preference];

            switch (cc) {
            case 'a':
                cout << bops[i].full << endl;
                break;
            case 'b':
                cout << bops[i].title << endl;
                break;
            case 'c':
                cout << bops[i].bopname << endl;
                break;
            default:
                break;
            }
        }
        
        cont:
        cout << "Plz enter: " << endl;
        cin >> c;
    }

    return 0;
}
