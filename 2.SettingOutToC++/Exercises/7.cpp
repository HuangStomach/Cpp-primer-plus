#include<iostream>

using namespace std;

void output(int, int);

int main(int argc, char const *argv[]) {
    int h, m;
    cout << "Enter h: ";
    cin >> h;
    cout << "Enter m: ";
    cin >> m;
    output(h, m);
    return 0;
}

void output(int h, int m) {
    cout << "Time: " << h << ":" << m << endl;
}
