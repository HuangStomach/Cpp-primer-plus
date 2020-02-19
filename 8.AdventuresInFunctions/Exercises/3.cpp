#include <iostream>
#include <string>

using namespace std;
void upperStr(string *);

int main(int argc, char const *argv[]) {
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);

    while (!(str.at(0) == 'q' && str.length() == 1)) {
        upperStr(&str);
        cout << str << endl;
        cout << "Enter a string (q to quit): ";
        getline(cin, str);
    }
    cout << "Bye" << endl;
    return 0;
}

void upperStr(string * str) {
    int length = str->length();
    char cs[length];
    for (int i = length - 1; i >= 0; i--) {
        cs[i] = toupper(str->at(i));
        str->pop_back();
    }
    
    for (int i = 0; i < length; i++) {
        str->push_back(cs[i]);
    }
}
