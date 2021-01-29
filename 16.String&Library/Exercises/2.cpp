#include <iostream>
#include <string>

using namespace std;

bool palindrome(string);

int main(int argc, char const *argv[]) {
    cout << "Enter words (enter quit to quit):\n";
    string input;
    while (getline(cin, input) && input != "quit")  {
        cout << (palindrome(input) ? "yes" : "no") << endl;
    }

    return 0;
}


bool palindrome(string str) {
    int size = str.length();
    for (int i = 0; i < size / 2; i++) {
        if (str[i] != str[size - i - 1]) return false;
    }
    return true;
}
