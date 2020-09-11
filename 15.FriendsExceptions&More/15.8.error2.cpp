#include <iostream>
#include <cfloat>

using namespace std;
bool hmean(double a, double bm, double * ans);

int main(int argc, char const *argv[]) {
    double x, y, z;
    cout << "Enter two numbers: ";
    while (cin >> x >> y) {
        if (hmean(x, y, &z)) {
            cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
        }
        else {
            cout << "try again.\n";
        }
        cout << "Enter next set of numbers <q to quit>: ";
    }
    cout << "Bye!\n";
    return 0;
}

bool hmean(double a, double b, double * ans) {
    if (a == -b) {
        *ans = DBL_MAX;
        return false;
    }
    *ans = 2.0 * a * b / (a + b);
    return true;
}
