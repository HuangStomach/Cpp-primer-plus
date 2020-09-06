#include <iostream>
#include "15.1.tv.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Tv s42;
    cout << "init: \n";
    s42.settings();
    s42.onoff();
    s42.chanup();
    cout << "settings: \n";
    s42.chanup();
    cout << "settings: \n";
    s42.settings();

    Remote grey;
    grey.set_chan(s42, 10);
    grey.volup(s42);
    grey.volup(s42);
    cout << "\n s42 settings";
    s42.settings();

    Tv s58(Tv::On);
    s58.set_mode();
    grey.set_chan(s58, 28);
    cout << "\n s58 settings:\n";
    s58.settings();

    return 0;
}
