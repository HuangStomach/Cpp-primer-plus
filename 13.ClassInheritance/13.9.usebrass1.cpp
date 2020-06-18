#include <iostream>
#include "13.7.brass.h"

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::endl;

    Brass Piggy("Porcelot", 381299, 4000.00);
    BrassPlus Hoggy("Horatio", 382288, 3000.00);
    Piggy.ViewAcct();
    cout << endl;
    Hoggy.ViewAcct();
    cout << endl;
    cout << "Depositing:\n";
    Hoggy.Deposit(1000.00);
    cout << Hoggy.Balance() << endl;
    cout << "Withdrawing:\n";
    Piggy.Withdraw(4200.00);
    cout << Piggy.Balance() << endl;
    cout << "Withdrawing:\n";
    Hoggy.Withdraw(4200.00);
    Hoggy.ViewAcct();

    return 0;
}
