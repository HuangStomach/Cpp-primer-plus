#include <iostream>
#include "6.stonewt.h"
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[]) {
    Stonewt stones[6];
    stones[0] = Stonewt(10);
    stones[1] = Stonewt(20);
    stones[2] = Stonewt(30);

    Stonewt max = stones[0];
    Stonewt min = stones[0];
    Stonewt standard = Stonewt(11);
    int count = 0;
    
    double pounds;
    for (int i = 1; i < 6; i++) {
        if (i > 2) {
            cout << "plz input the pounds: " << endl;
            cin >> pounds;
            stones[i] = Stonewt(pounds);
        }
        
        max = (stones[i] > max) ? stones[i] : max;
        min = (stones[i] < min) ? stones[i] : min;
        if (stones[i] > standard) count++;
    }

    cout << "max is: " << max << endl;
    cout << "min is: " << min << endl;
    cout << "there r " << count << " stones over 11 pds" << endl;

    return 0;
}

