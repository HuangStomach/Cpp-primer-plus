#include <iostream>
#include <string>

using namespace std;
int COUNT = 0;
void show(string str);
void show(string str, int i);

int main(int argc, char const *argv[]) {
    string str = "this is str";
    show(str);
    show(str);
    show(str);
    show(str, 1);
    return 0;
}

void show(string str) {
    cout << str << endl;
    COUNT++;
}

void show(string str, int i) {
    if (i > 0) for (int j = 0; j < COUNT; j++) {
        cout << str << endl;
    }
}