#include <iostream>
#include "10.7.stock20.h"

const int STKS = 4;
int main(int argc, char const *argv[]) {
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("Fleep Enterprises", 60, 6.5),
    };

    std::cout << "Stock holdings:\n";
    int st;
    for (st  = 0; st < STKS; st++) {
        stocks[st].show();
    }
    const Stock * top = &stocks[0];
    for (st  = 1; st < STKS; st++) {
        top = &top->topval(stocks[st]);
    }
    std::cout << "Most: \n";
    top->show();
    
    return 0;
}
