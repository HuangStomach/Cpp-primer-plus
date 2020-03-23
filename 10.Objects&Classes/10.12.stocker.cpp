#include <iostream>
#include <cctype>
#include "10.10.stack.h"

int main(int argc, char const *argv[]) {
    using namespace std;
    Stack st;
    char ch;
    unsigned long po;
    
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
