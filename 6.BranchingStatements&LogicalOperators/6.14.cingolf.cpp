#include <iostream>

const int Max = 5;
int main(int argc, char const *argv[]) {
    using namespace std;

    int golf[Max];
    int i = 0;
    for (i = 0; i < Max; i++) {
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n') {
                continue;
            }
            cout << "Please enter a number: ";
        }
    }

    double total = 0.0;
    for (int j = 0; j < i; j++) {
        total += golf[j];
    }

    cout << total / Max << endl;
    return 0;
}
