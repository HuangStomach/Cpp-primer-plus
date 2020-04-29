#include <iostream>
#include "7.complex.h"
using namespace std;

int main(int argc, char const *argv[]) {
    Complex a(3.0, 4.0);
    Complex c;
    cout << "Enter a complex number (q to quit):\n";
    while (cin >> c) {
        cout << "c is " << c << '\n';
        cout << "complex conjugate is " << ~c << '\n';
        cout << "a is " << a << '\n';
        cout << "a + c is " << a + c << '\n';
        cout << "a - c is " << a - c << '\n';
        cout << "a * c is " << a * c << '\n';
        cout << "2 * c is " << 2 * c << '\n';
        cout << "Enter a complex number (q to quit):\n";
    }
    
    cout << "Done!\n";
    return 0;
}
