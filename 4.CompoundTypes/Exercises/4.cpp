#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << "What's your first name? ";
    string f;
    getline(cin, f);

    cout << "What's your last name? ";
    string l;
    getline(cin, l);

    cout << "Name: " << l << ", " << f << endl;

    return 0;
}
