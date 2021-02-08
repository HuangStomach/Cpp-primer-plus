#include <iostream>
const int SLEN = 10;
inline void eatline() { while (std::cin.get() != '\n') continue; }

int main(int argc, char const *argv[]) {
    using namespace std;

    char name[SLEN];
    char title[SLEN];
    cout << "Enter your name: ";
    cin.get(name, SLEN);
    if (cin.peek() != '\n') cout << "Sorry, we only have enough room for " << name << endl;
    eatline();

    cout << name << ", enter your title: \n";
    cin.get(title, SLEN);
    if (cin.peek() != '\n') cout << "truncate.\n";
    eatline();

    cout << "name: " << name << "title: " << title <<< endl;

    return 0;
}
