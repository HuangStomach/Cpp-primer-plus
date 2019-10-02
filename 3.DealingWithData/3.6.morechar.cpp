#include <iostream>

int main(int argc, char const *argv[]) {
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code: " << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Display with put: " << endl;
    cout.put(ch);
    cout.put('!');
    cout << endl << "Done." << endl;

    return 0;
}
