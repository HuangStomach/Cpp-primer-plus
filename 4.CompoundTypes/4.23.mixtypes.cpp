#include <iostream>
using namespace std;

struct antarctica_years_end {
    int year;
};

int main(int argc, char const *argv[]) {
    antarctica_years_end s01, s02, s03;
    s01.year = 1998;
    antarctica_years_end * pa = &s02;
    pa->year = 1999;
    antarctica_years_end trio[3];
    trio[3].year = 2003;

    cout << trio->year << endl;
    const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
    cout << arp[1]->year << endl;
    const antarctica_years_end ** ppa = arp;
    auto ppb = arp;
    cout << (*ppa)->year << endl;
    cout << (*(ppb + 11))->year << endl;
    return 0;
}
