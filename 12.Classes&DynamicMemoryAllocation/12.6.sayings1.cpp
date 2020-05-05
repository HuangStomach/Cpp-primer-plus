#include <iostream>
#include "12.4.string1.h"
const int ArSize = 10;
const int Maxlen = 81;

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::cin;
    using std::endl;
    String name;

    cout << "name?\n" ;
    cin >> name;

    cout << name << ", plz enter up to " << ArSize << " short sayings\n";
    String sayings[ArSize];
    char temp[Maxlen];
    int i;
    for (i = 0; i < ArSize; i++) {
        cout << i + 1 << ": ";
        cin.get(temp, Maxlen);
        while (cin && cin.get() != '\n') continue;
        if (!cin || temp[0] == '\0') break;
        else sayings[i] = temp;
    }

    int total = i;

    if (total > 0) {
        for (i = 0; i < total; i++) {
            cout << sayings[i][0] << ": " << sayings[i] << endl;
        }

        int shortest = 0;
        int first = 0;
        for (i = 1; i < total; i++) {
            if (sayings[i].length() < sayings[shortest].length()) {
                shortest = i;
            }
            if (sayings[i] < sayings[first]) {
                first = i;
            }
        }
        
        cout << sayings[shortest] << endl;
        cout << sayings[first] << endl;
        cout << String::HowMany() << endl;
    }
    else cout << "Bye!";
    return 0;
}
