#include <iostream>
using namespace std;
double betsy(int);
double pam(int);

void estimate(int lines, double (*pt)(int));

int main(int argc, char const *argv[]) {
    int code;
    cout << "Lines? ";
    cin >> code;
    cout << "Betsy's estimate:\n";
    estimate(code, betsy);
    cout << "Pam:\n";
    estimate(code, pam);
    return 0;
}

double betsy(int lns) {
    return 0.05 * lns;
}

double pam(int lns) {
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int)) {
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)" << endl;
}