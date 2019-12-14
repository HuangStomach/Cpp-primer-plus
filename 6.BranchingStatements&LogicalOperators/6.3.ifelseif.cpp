#include <iostream>

const int Fave = 27;

int main(int argc, char const *argv[]) {
    using namespace std;
    int n;

    cout << "Enter a number in the range 1-100 to find ";
    cout << "favourite number: ";

    do {
        cin >> n;
        if (n < Fave) cout << "Too low: ";
        else if (n > Fave) cout << "Too high: ";
        else cout << Fave << " is right!";
    } while (n != Fave);

    return 0;
}
