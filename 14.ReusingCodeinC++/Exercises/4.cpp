#include <iostream>
#include <cstring>
#include "4.person.h"

using namespace std;
const int SIZE = 5;

int main(int argc, char const *argv[])
{

    Person * people[SIZE];

    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter employee\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL) {
            cout << "Plz enter 1, 2, 3 or q: ";
            cin >> choice;
        }
        if (choice == 'q') break;
        switch (choice) {
        case '1':
            people[ct] = new Gunslinger;
            break;
        case '2':
            people[ct] = new PokerPlayer;
            break;
        case '3':
            people[ct] = new BadDude;
            break;
        }
        cin.get();
    }
    
    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++) {
        cout << endl;
        people[i]->Show();
    }
    for (i = 0; i < ct; i++) delete people[i];
    cout << "Bye.\n";

    return 0;
}
