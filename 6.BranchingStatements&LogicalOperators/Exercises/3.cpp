#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << "Plz enter: " << endl;
    cout << "c) carnivore   p) pianist" << endl;
    cout << "t) tree        g) game" << endl;

    char c;
    cout << "Plz enter: " << endl;
    cin >> c;

    while (c != 'c' && c != 'p' && c != 't' && c != 'g') {
        while (cin.get() != '\n') continue;
        cout << "Plz enter: " << endl;
        cin >> c;
    }
    
    cout << "A map is a ";
    switch (c) {
    case 'c':
        cout << "carnivore" << endl;
        break;
    case 'p':
        cout << "pianist" << endl;
        break;
    case 't':
        cout << "tree" << endl;
        break;
    case 'g':
        cout << "game" << endl;
        break;
    default:
        break;
    }

    return 0;
}
