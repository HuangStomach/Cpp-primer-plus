#include <iostream>
#include "10.4.stock10.h"

int main(int argc, char const *argv[]) {
    using std::cout;
    cout << "Using constructors\n";
    Stock stock1("NanoSmart", 12, 20.0);
    stock1.show();
    Stock stock2 = Stock("Boffo Objects", 2, 2.0);
    stock2.show();

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    stock1.show();
    stock2.show();

    cout << "Using constructors\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);
    cout << "Revised stock1:\n";
    stock1.show();
    cout << "Done.\n";

    return 0;
}
