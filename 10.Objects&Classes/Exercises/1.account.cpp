#include "1.account.h"
#include <iostream>

Account::Account(const std::string name, const std::string num, double amount) {
    this->name = name;
    this->num = num;
    this->amount = amount;
}

void Account::input(double income) {
    this->amount += income;
}

void Account::ouput(double outcome) {
    if (this->amount < outcome) {
        std::cout << "wrong\n";
        return;
    }
    this->amount -= outcome;
}

void Account::show() {
    std::cout << "name: " << this->name << std::endl;
    std::cout << "num: " << this->num << std::endl;
    std::cout << "amount: " << this->amount << std::endl;
}
