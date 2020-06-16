#include <iostream>
#include "13.7.brass.h"

using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f, precis p);

Brass::Brass(const string & s, long an, double bal) {
    fullName = s;
    acctNum = an;
    balance = bal;
}

void Brass::Deposit(double amt) {
    if (amt < 0) cout << "Negative deposit cancelled.\n";
    else balance += amt;
}

void Brass::Withdraw(double amt) {
    format initialState = setFormat();
    precis prec = cout.precision(2);

    if (amt < 0) cout << "Withdraw cancelled.\n";
    else if (amt <= balance) balance -= amt;
    else cout << "Withdraw cancelled.\n";
    restore(initialState, prec);
}

double Brass::Balance() const {
    return balance;
}

void Brass::ViewAcct() const {
    format initialState = setFormat();
    precis prec = cout.precision(2);
    cout << "Client: " << fullName << endl;
    cout << "Account Number: " << acctNum << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState, prec);
}

BrassPlus::BrassPlus(const string & s, long an, double bal, double m1, double r) : Brass(s, an, bal) {
    maxLoan = m1;
    owesBank = 0.0;
    rate = r;
}
