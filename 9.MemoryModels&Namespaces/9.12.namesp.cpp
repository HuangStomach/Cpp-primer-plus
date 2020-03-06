#include <iostream>
#include "9.11.namesp.h"

namespace pers {
    using std::cout;
    using std::cin;

    void getPerson(Person & rp) {
        cout << "First:";
        cin >> rp.fname;
        cout << "Last: ";
        cin >> rp.lname;
    }

    void showPerson(const Person & rp) {
        std::cout << rp.lname << ", " << rp.fname;
    }
}

namespace debts {
    void getDebts(Debt & rd) {
        getPerson(rd.name);
        std::cout << "Enter debt: ";
        std::cin >> rd.amount;
    }

    void showDebt(const Debt & rd) {
        showPerson(rd.name);
        std::cout << ": $" << rd.amount << std::endl;
    }

    double sumDebts(const Debt ar[], int n) {
        double total = 0;
        for (int i = 0; i < n; i++) {
            total += ar[i].amount;
        }
        return total;
    }
}
