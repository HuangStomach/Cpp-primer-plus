#include <iostream>
enum {red, orange, yellow};

int main(int argc, char const *argv[]) {
    using namespace std;
    cout << "Enter code: ";
    int code;
    cin >> code;

    while (code >= red && code <= yellow) {
        switch (code) {
            case red: cout << "red" << endl; break;
            case orange: cout << "orange" << endl; break;
            case yellow: cout << "yellow" << endl; break;
        }

        cout << "Enter code: ";
        cin >> code;
    }
    
    cout << "Bye\n";
    return 0;
}
