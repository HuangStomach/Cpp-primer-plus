#include <iostream>
#include <string>

using namespace std;

const int ArSize = 10;

void strcount(const string);

int main(int argc, char const *argv[]) {
    string input;
    char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (input.compare("") != 0) {
        strcount(input);
        cout << "Enter next line:\n";
        getline(cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(const string str) {
    static int total = 0;

    cout << "\"" << str << "\" constains ";
    total += str.length();
    cout << str.length() << " characters\n";
    cout << total << " characters total\n";
}
