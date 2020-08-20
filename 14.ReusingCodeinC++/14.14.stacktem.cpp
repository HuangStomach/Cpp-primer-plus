#include <iostream>
#include <string>
#include <cctype>
#include "14.13.stacktp.h"
    
using namespace std;

int main(int argc, char const *argv[]) {
    Stack<string> st;
    char ch;
    string po;
    
    while (cin >> ch && toupper(ch) != 'Q') {
        while (cin.get() != '\n') continue;
        if (!isalpha(ch)) {
            cout << '\a';
            continue;
        }
        switch (ch) {
            case 'A':
            case 'a':
                cout << "Enter: ";
                cin >> po;
                if (st.isfull()) cout << "full";
                else st.push(po);
                break;
            case 'P':
            case 'p':
                if (st.isempty()) cout << "empty";
                else st.pop(po);
                break;
            default:
                break;
        }
    }
    
    cout << "Bye\n";
    return 0;
}
