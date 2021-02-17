#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    int num;
    char ch;
    string other;

    cout << "Enter a string with $: ";
    while (cin.peek() != '$') {
        num++;
        cin.get(ch);
    }

    cout << "before $, there r " << num << " chars in there.\n";
    if (!cin.eof()) {
        cin >> other;
        cout << "after thar, we can got: " << other;
    }
    else cout << "after thar, we can got nothing.";
    cout << endl;

    return 0;
}
