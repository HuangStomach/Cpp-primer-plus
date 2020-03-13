#include <iostream>
#include "10.1.stock00.h"

void Stock::acquire(const std::string & co, long n, double pr) {
    company = co;
    if (n < 0) {
        std::cout << "set to 0" << std::endl;
        shares = 0;
    }
    else shares = n;
    share_val = pr;
    set_tot();
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

void Stock::show() {
    std::cout << "Company" << company
        << " Shares: " << shares << "\n"
        << " Share Price: $" << share_val
        << " Total Worth: $" << total_val << "\n";
}
