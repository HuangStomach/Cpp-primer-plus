#include <iostream>
#include "5.stonewt.h"
using std::cout;

int main(int argc, char const *argv[]) {
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);

    cout << incognito;
    cout << wolfe;
    cout << taft;
    
    Stonewt a = incognito + wolfe;
    Stonewt b = wolfe - taft;
    Stonewt c = incognito * wolfe;

    b.setType(1);
    c.setType(2);

    cout << a;
    cout << b;
    cout << c;

    return 0;
}

