#include <iostream>
#include "15.1.tv.h"

bool Tv::volup() {
    if (volume < MaxVal) {
        volume++;
        return true;
    }
    return false;
}

bool Tv::voldown() {
    if (volume > MinVal) {
        volume--;
        return true;
    }
    return false;
}

void Tv::chanup() {
    if (channel < maxchannel) channel++;
    else channel = 1;
}

void Tv::chandown() {
    if (channel > 1) channel--;
    else channel = maxchannel;
}

void Tv::settings() const {
    using std::cout;
    using std::endl;
    cout << "TV is " << (state == Off ? "Off" : "On") << endl;
    if (state == On) {
        cout << "Volume: " << volume << endl;
        cout << "Channel: " << channel << endl;
        cout << "Mode: " << (mode == Antenna ? "antenna" : "cable") << endl;
        cout << "Input: " << (input == TV ? "TV" : "DVD") << endl;
    }
}
