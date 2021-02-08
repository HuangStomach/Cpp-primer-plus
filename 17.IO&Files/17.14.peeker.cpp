#include <iostream>

int main(int argc, char const *argv[]) {
    using namespace std;

    char ch;
    while (cin.get(ch)) {
        if (ch != '#') cout << ch;
        else {
            cin.putback(ch);
            break;
        }
    }

    if (!cin.eof()) {
        cin.get(ch);
        cout << endl << ch << "is the next.\n";
    }
    else {
        cout << "end.\n";
        exit(0);
    }

    while (cin.peek() != '#') {
        cin.get(ch);
        cout << ch;
    }

    if (!cin.eof()) {
        cin.get(ch);
        cout << endl << ch << "is next.\n";
    }
    else cout << "end.\n";
    
    return 0;
}
