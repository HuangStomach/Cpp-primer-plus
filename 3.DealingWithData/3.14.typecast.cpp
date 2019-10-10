#include <iostream>

int main(int argc, char const *argv[]) {
    using namespace std;
    int auks, bats, coots;

    auks = 19.99 + 19.99;
    bats = (int) 19.99 + (int) 11.99;
    coots = int(19.99) + int(11.99);
    cout << "auks = " << auks << ", bats = " << endl;

    char ch = 'Z';
    cout << "The code for " << ch << " is ";
    cout << int(ch) << endl;
    cout << "Yes, the code is ";
    cout << static_cast<int>(ch) << endl;
    
    return 0;
}
