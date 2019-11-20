#include <iostream>

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::endl;
    int a = 20;
    int b = 20;
    cout << "a = " << a << ": b = " << b << endl;
    cout << "a++ = " << a++ << ": ++b = " << ++b << endl;
    cout << "a = " << a << ": b = " << b << endl;

    return 0;
}
