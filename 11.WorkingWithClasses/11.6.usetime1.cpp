#include <iostream>
#include "11.4.mytime1.h"

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::endl;
    Time planning;
    Time coding(2, 40);
    Time fixing(2, 40);
    Time total;

    planning.Show();
    cout << endl;
    coding.Show();
    cout << endl;
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    total.Show();
    cout << endl;
    
    Time morefixing(3, 28);
    morefixing.Show();
    total = morefixing.operator+(total);
    total.Show();
    cout << endl;

    return 0;
}
