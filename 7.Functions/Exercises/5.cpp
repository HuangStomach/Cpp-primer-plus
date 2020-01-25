#include <iostream>

using namespace std;
int factorial(int);

int main(int argc, char const *argv[]) {
    int number;

    cout << "Plz enter a number: ";
    cin >> number;
    cout << factorial(number) << endl;
    return 0;
}

int factorial(int number) {
    if (number == 0) return 1;
    return number * factorial(number - 1);
}
