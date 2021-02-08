#include <iostream>
const int Limit = 255;

using namespace std;

int main(int argc, char const *argv[]) {
    char input[Limit];

    cout << "Enter a string for getline()\n";
    cin.getline(input, Limit, '#');
    cout << "Here:\n";
    cout << input << "\nDone\n";

    char ch;
    cin.get(ch);
    cout << "next char is " << ch << endl;

    if (ch != '\n') cin.ignore(Limit, '\n');

    cout << "Enter a string for get()\n";
    cin.get(input, Limit, '#');
    cout << "Here:\n";
    cout << input << "\nDone\n";
    
    cin.get(ch);
    cout << "next char is " << ch << endl;

    return 0;
}
