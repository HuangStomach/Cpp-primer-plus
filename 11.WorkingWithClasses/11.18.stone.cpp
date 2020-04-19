#include <iostream>
#include "11.16.stonewt.h"
using std::cout;

void display(const Stonewt & st, int n);

int main(int argc, char const *argv[]) {
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    incognito.show_stn();
    wolfe.show_stn();
    taft.show_stn();

    incognito = 276.8;
    taft = 325;
    incognito.show_stn();
    taft.show_stn();

    display(taft, 2);
    display(422, 2);

    return 0;
}

void display(const Stonewt & st, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Wow! ";
        st.show_stn();
    }   
}
