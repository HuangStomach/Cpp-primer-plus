#include <iostream>

using namespace std;
double ave(double, double);

int main(int argc, char const *argv[]) {
    double x;
    double y;
    cout << "Input x: ";
    cin >> x;
    cout << "Input y: ";
    cin >> y;

    while (x > 0 && y > 0) {
        cout << "Ave is " << ave(x, y) << endl;
        cout << "Input x: ";
        cin >> x;
        cout << "Input y: ";
        cin >> y;
    }
    
    cout << "Bye." << endl;
    return 0;
}

double ave(double x, double y) {
    return 2.0 * x * y / (x + y);
}
