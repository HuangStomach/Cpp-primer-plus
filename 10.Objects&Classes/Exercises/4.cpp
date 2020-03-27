#include "4.sales.h"
#include <iostream>

using namespace SALES;

int main(int argc, char const *argv[]) {
    Sales s1 = Sales();
    double ar[3] = {10.0, 20.0, 30.0};
    Sales s2 = Sales(ar, 3);

    s1.show();
    s2.show();
    return 0;
}
