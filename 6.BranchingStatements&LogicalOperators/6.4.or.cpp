#include <iostream>

int main(int argc, char const *argv[]) {
    using namespace std;
    cout << "continue? <y/n>";
    char ch;
    cin >> ch;

    if (ch == 'y' || ch == 'Y') cout << "U r warned!\a\a\n";
    else if (ch == 'n' || ch == 'N') cout << "bye\n";
    else cout << "nonono.\a\a\a\n";

    return 0;
}
