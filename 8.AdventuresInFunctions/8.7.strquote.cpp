#include <iostream>
#include <string>

using namespace std;
string version1(const string & s1, const string & s2);
const string & version2(const string & s1, const string & s2);
const string & version3(const string & s1, const string & s2);

int main(int argc, char const *argv[]) {
    string input;
    string copy;
    string result;

    cout << "Enter a string: ";
    getline(cin, input);
    copy = input;
    cout << "Your string: " << input << endl;
    result = version1(input, "***");
    cout << "Your result: " << result << endl;
    cout << "Your string: " << input << endl;

    result = version2(input, "###");
    cout << "Your result: " << result << endl;
    cout << "Your string: " << input << endl;

    cout << "Resetting original string." << endl;
    input = copy;
    result = version3(input, "@@@");
    cout << "Your result: " << result << endl;
    cout << "Your string: " << input << endl;

    return 0;
}

string version1(const string & s1, const string & s2) {
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}

const string & version2(string & s1, const string & s2) {
    s1 = s2 + s1 + s2;
    return s1;
}

const string & version3(string & s1, const string & s2) {
    string temp;
    temp = s2 + s1 + s2;
    return temp;
}
