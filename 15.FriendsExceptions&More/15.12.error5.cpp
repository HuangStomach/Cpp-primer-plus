#include <iostream>
#include <cmath>
#include <string>
#include "15.10.exc_mean.h"

using namespace std;

class demo {
private:
    string word;
public:
    demo(const string & str) {
        word = str;
        cout << "demo " << word << " created\n";
    }

    ~demo() {
        cout << "demo " << word << " destroyed\n";
    }

    void show() const {
        cout << "demo " << word << " lives!\n";
    }
};

double hmean(double a, double b);
double gmean(double a, double b);
double means(double a, double b);

int main(int argc, char const *argv[]) {
    double x, y, z; {
        demo d1("found in block in main()");
        cout << "Enter two numbers: ";
        while (cin >> x >> y) {
            try {
                z = means(x, y);
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
        
    }

    cin.get();
    cin.get();
    return 0;
}

double hmean(double a, double b) {
    if (a == -b) throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) {
    if (a < 0 || b < 0) throw bad_gmean(a, b);
    return sqrt(a * b);
}

double means(double a, double b) {
    double am, hm, gm;
    demo d2("found in means()");
    am = (a + b) / 2.0;
    try
    {
        hm = hmean(a, b);
        gm = gmean(a, b);
    }
    catch(bad_hmean & bg) {
        bg.mesg();
        cout << "again\n";
        throw;
    }
    d2.show();
    return (am + hm + gm) / 3.0;
}