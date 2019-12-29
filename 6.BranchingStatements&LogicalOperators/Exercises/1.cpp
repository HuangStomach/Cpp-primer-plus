#include <iostream>
#include <cctype>

int main(int argc, char const *argv[]) {
    using namespace std;
    string str;

    char c;
    cin >> c;
    while (c != '@') {
        if (!isnumber(c)) str += c;
        cin >> c;
    }
    
    cout << str;
    
    return 0;
}
