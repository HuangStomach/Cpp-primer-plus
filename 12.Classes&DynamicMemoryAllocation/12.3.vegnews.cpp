#include <iostream>
#include "12.1.strngbad.h"
using std::cout;

void callme1(StringBad &);
void callme2(StringBad);

int main(int argc, char const *argv[]) {
    using std::endl;
    {
        cout << "Starting an inner block.\n";
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leves Bowl for Dollars");

        cout << "hl1" << headline1 << endl;
        cout << "hl2" << headline2 << endl;
        cout << "sports" << sports << endl;

        callme1(headline1);
        cout << "hl1" << headline1 << endl;
        callme2(headline2);
        cout << "hl2" << headline2 << endl;

        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        StringBad knot;
        cout << "knot: " << knot << endl;
    }
    cout << "End.\n";
    return 0;
}

void callme1(StringBad & rsb) {
    cout << "reference:\n";
    cout << "   \"" << rsb << "\"\n";
}

void callme2(StringBad sb) {
    cout << "value:\n";
    cout << "   \"" << sb << "\"\n";
}
