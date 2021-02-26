#include "18.6.somedefs.h";
#include <iostream>
#include <functional>

double dub(double x) { return 2.0 * x; }
double square(double x) { return x * x; }

int main(int argc, char const *argv[]) {
    using namespace std;

    double y = 1.21;
    function<double(double)> ef1 = dub;
    function<double(double)> ef2 = square;
    function<double(double)> ef3 = Fq(10.0);
    function<double(double)> ef4 = Fp(10.0);;
    function<double(double)> ef5 = [](double u) { return u * u; };
    function<double(double)> ef6 = [](double u) { return u + u / 2.0; };

    cout << "dub:\n";
    cout << " " << use_f(y, ef1) << endl;
    cout << "square:\n";
    cout << " " << use_f(y, ef2) << endl;
    cout << "Fp:\n";
    cout << " " << use_f(y, ef3) << endl;
    cout << "Fq:\n";
    cout << " " << use_f(y, ef4) << endl;
    cout << "lambda 1:\n";
    cout << " " << use_f(y, ef5) << endl;
    cout << "lambda 2:\n";
    cout << " " << use_f(y, ef6) << endl;

    return 0;
}
