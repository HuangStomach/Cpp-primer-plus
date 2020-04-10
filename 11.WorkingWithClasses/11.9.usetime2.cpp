#include <iostream>
#include "11.7.mytime2.h"

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::endl;
    Time weeding(2, 40);
    Time waxing(2, 40);
    Time total;
    Time diff;
    Time adjusted;

    weeding.Show();
    cout << endl;
    waxing.Show();
    cout << endl;

    total = weeding + waxing;
    total.Show();
    cout << endl;

    diff = weeding - waxing;
    diff.Show();
    cout << endl;
    
    adjusted = total * 1.5;
    adjusted.Show();
    cout << endl;

    return 0;
}
