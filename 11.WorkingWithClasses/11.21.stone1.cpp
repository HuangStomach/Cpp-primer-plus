#include <iostream>
#include "11.19.stonewt1.h"

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::endl;
    Stonewt poppins(9, 2.8);
    double p_wt = poppins;

    cout << p_wt << " " << int(poppins) << endl;

    return 0;
}
