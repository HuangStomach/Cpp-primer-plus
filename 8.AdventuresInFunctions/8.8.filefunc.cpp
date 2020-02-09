#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main(int argc, char const *argv[]) {
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open()) {
        cout << "Error" << endl;
        exit(EXIT_FAILURE);
    }

    double objective;
    cout << "Enter: ";
    cin >> objective;
    double eps[LIMIT];
    cout << "Enter length: " << endl;
    for (int i = 0; i < LIMIT; i++) {
        cout << "Eyepiece " << i + 1 << endl;
        cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);

    return 0;
}

void file_it(ostream & os, double fo, const double fe[], int n) {
    ios_base::fmtflags initial;
    initial = os.setf(ios_base::fixed);
    os.precision(0);
    os << "Focal length of objective: " << fo << "mm" << endl;
    os.setf(ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f.l. eyepiece";
    os.widen(15);
    os << "magnification" << endl;
    for (int i = 0; i < n; i++) {
        os.widen(12);
        os << fe[i];
        os.widen(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }
    os.setf(initial);
}
