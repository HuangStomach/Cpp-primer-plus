#include "4.sales.h"
#include <iostream>

using namespace SALES;

int main(int argc, char const *argv[]) {
    Sales s1;
    Sales s2;
    setSales(s1);
    double ar[3] = {10.0, 20.0, 30.0};
    setSales(s2, ar, 3);

    showSales(s1);
    showSales(s2);
    return 0;
}
