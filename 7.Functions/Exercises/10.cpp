#include <iostream>

using namespace std;
double add(double x, double y);
double subtraction(double x, double y);
double calculate(double, double, double (*pt1)(double, double), double (*pt2)(double, double));

int main(int argc, char const *argv[]) {
    double x;
    double y;

    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    while (x > 0 && y > 0) {
        cout << calculate(x, y, add, subtraction) << endl;
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;
    }
    
    return 0;
}

double calculate(double x, double y, double (*pt1)(double, double), double (*pt2)(double, double)) {
    return pt1(x, y) * pt2(x, y);
}

double add(double x, double y) {
    return x + y;
}

double subtraction(double x, double y) {
    return x - y;
}
