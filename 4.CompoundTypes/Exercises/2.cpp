#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
    using namespace std;
    string name;
    string dessert;

    cout << "Enter your name:\n";
    getline(cin, name);
    cout << "Enter your favourite dessert:\n";
    getline(cin, dessert);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}
