#include <iostream>
#include "14.13.stacktp.h"

template <template <typename T> class Thing>
class Crab {
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Crab() {};
    bool push(int a, double x) { return s1.push(a) && s2.push(x); }
    bool pop(int & a, double & x) { return s1.pop(a) && s2.pop(x); }
};

using namespace std;
int main(int argc, char const *argv[]) {
    Crab<Stack> nebula;
    int ni;
    double nb;
    
    while (cin >> ni >> nb && ni > 0 && nb > 0) {
        if (!nebula.push(ni, nb)) break;
    }

    while (nebula.pop(ni, nb)) cout << ni << ", " << nb << endl;

    return 0;
}

