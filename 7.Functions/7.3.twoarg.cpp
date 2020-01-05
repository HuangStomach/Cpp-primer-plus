#include <iostream>

using namespace std;
void n_chars(char, int);

int main(int argc, char const *argv[]) {
    int times;
    char ch;

    cout << "Enter: ";
    cin >> ch;
    while (ch != 'q') {
        cout << "Enter int: ";
        cin >> times;
        n_chars(ch, times);
        cout << "q to quit: ";
        cin >> ch;
    }
    
    return 0;
}

void n_chars(char c, int n) {
    while (n-- > 0) {
        cout << c;
    }
}
