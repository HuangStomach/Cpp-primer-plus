#include "18.6.somedefs.h";
#include <iostream>

double dub(double x) { return 2.0 * x; }
double square(double x) { return x * x; }
int main(int argc, char const *argv[]) {
    using namespace std;
    double y = 1.21;

    cout << "dub:\n";
    cout << " " << use_f(y, dub) << endl;
    cout << "square:\n";
    cout << " " << use_f(y, square) << endl;
    cout << "Fp:\n";
    cout << " " << use_f(y, Fp(5.0)) << endl;
    cout << "Fq:\n";
    cout << " " << use_f(y, Fq(5.0)) << endl;
    cout << "lambda 1:\n";
    cout << " " << use_f(y, [](double u) { return u * u; }) << endl;
    cout << "lambda 2:\n";
    cout << " " << use_f(y, [](double u) { return u + u / 2.0; }) << endl;

    return 0;
}
