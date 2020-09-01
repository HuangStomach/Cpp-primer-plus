#include <iostream>
#include "2.wine.h"

int main(int argc, char const *argv[]) {
    using namespace std;

    cout << "Enter name: ";
    char lab[50];
    cin.getline(lab, 50);
    cout << "Enter years: ";
    int yrs;
    cin >> yrs;
    
    Wine holding(lab, yrs);
    holding.GetBottles();
    holding.Show();

    const int YRS = 3;
    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};
    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();
    cout << "Total bottles for " << more.Label() << ": " << more.sum() << endl;

    return 0;
}

