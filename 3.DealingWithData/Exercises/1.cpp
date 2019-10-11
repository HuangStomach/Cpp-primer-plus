#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int height;
    const int unit = 12;

    cout << "Plz enter your height: ___\b\b\b";
    cin >> height;

    cout << "Your height is " << height * unit << endl;
    
    return 0;
}
