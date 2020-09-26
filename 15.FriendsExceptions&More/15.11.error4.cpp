#include <iostream>
#include <cmath>
#include "15.10.exc_mean.h"

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
            bg.mesg();
            cout << "again\n";
            continue;
        }
        catch(bad_gmean & hg) {
            cout << hg.mesg();
            break;
        }
        
    }
    
    return 0;
}

