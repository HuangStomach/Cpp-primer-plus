#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    const int begin = 100;
    int year = 0;
    double daphne, cleo = begin;

    while (cleo <= daphne) {
        daphne += begin * 0.1;
        cleo *= 1.05;
        ++year;
    }
    
    cout << "Year " << year << " Cleo win" << endl;
    cout << "Cleo: " << cleo << " Daphne: " << daphne << endl;

    /* code */
    return 0;
}
