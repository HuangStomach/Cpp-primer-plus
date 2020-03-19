#include <iostream>
#include "10.7.stock20.h"

Stock::Stock() {
    std::cout << "Default\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr) {
    std::cout << "Constructor using" << co << "\n";
    company = co;
    shares = n >= 0 ? n : 0;
    share_val = pr;
    set_tot();
}

Stock::~Stock() {
    std::cout << "Bye." << "!\n";
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "negative" << std::endl;
    }
    else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    using std::endl;
    if (num < 0 || num > shares) {
        cout << "negative" << endl;
        return;
    }
    shares -= num;
    share_val = price;
    set_tot();
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() const {
    std::cout << "Company" << company
        << " Shares: " << shares << "\n"
        << " Share Price: $" << share_val
        << " Total Worth: $" << total_val << "\n";
}

const Stock & Stock::topval(const Stock & s) const {
    return s.total_val > total_val ? s : *this;
}
