#include <iostream>

int main(int argc, char const *argv[]) {
    using namespace std;
    int a, b;
    cin >> a >> b;
    int c = a > b ? a : b;
    cout << c << " is larger" << endl;
    return 0;
}
