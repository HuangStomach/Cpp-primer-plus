#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << "plz enter your income: ";

    double in;
    cin >> in;

    while (in > 0) {
        while (cin.get() != '\n') continue;
        
        double after = 0.0;
        if (in <= 5000) after = 0;
        else if (in <= 15000) {
            after = 0;
            in -= 5000;
            after += in * 0.1;
        }
        else if (in <= 35000) {
            after = 10000 * 0.1;
            in -= 15000;
            after += in * 0.15;
        }
        else if (in > 35000) {
            after = 10000 * 0.1 + 20000 * 0.15;
            in -= 35000;
            after += in * 0.2;
        }

        cout << "after is: " << after << endl;

        cout << "plz enter your income: ";
        cin >> in;
    }

    return 0;
}
