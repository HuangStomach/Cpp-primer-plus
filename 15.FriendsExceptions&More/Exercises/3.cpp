#include <iostream>
#include <cmath>
#include "3.error.h"

double hmean(double a, double b);
double gmean(double a, double b);

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;
    cout << "Enter two numbers: ";
    while (cin >> x >> y) {
        try {
            z = hmean(x, y);
            cout << "hmean is " << z << endl;
            cout << "gmean is " << gmean(x, y) << endl;
        }
        catch(bad_hmean & bg) {
            bg.what();
            cout << "again\n";
            continue;
        }
        catch(bad_gmean & hg) {
            cout << hg.what();
            break;
        }
        
    }
    
    return 0;
}

double hmean(double a, double b) {
    if (a == -b) throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
    if (a < 0 || b < 0) throw bad_gmean(a, b);
    return std::sqrt(a * b);
}
