#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << "What's your first name? ";
    string f;
    getline(cin, f);

    cout << "What's your last name? ";
    string l;
    cin >> l;

    cout << "What letter grade do you deserve? ";
    char g;
    cin >> g;

    int age;
    cout << "What's your age? ";
    cin >> age;

    cout << "Name: " << l << ", " << f << endl;
    cout << "Grade: " << char(g + 1) << endl;
    cout << "Age: " << age << endl;

    return 0;
}
