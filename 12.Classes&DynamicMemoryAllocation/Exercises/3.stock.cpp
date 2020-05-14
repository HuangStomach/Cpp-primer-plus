#include <iostream>
#include "3.stock.h"

Stock::Stock() {
    std::cout << "Default\n";
    company = new char[strlen("no name") + 1];
    strcpy(company, "no name");
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char * co, long n, double pr) {
    std::cout << "Constructor using " << co << "\n";
    int len = strlen(co);
    company = new char[len + 1];
    strcpy(company, co);
    shares = n >= 0 ? n : 0;
    share_val = pr;
    set_tot();
}

Stock::~Stock() {
    delete[] company;
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

const Stock & Stock::topval(const Stock & s) const {
    return s.total_val > total_val ? s : *this;
}

std::ostream & operator<<(std::ostream & os, const Stock & s) {
    os << "Company: " << s.company
        << " Shares: " << s.shares << "\n"
        << "Share Price: $" << s.share_val
        << " Total Worth: $" << s.total_val << "\n";
    return os;
}
