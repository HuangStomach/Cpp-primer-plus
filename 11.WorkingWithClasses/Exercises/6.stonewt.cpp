#include "6.stonewt.h"
using std::cout;

Stonewt::Stonewt(double lbs) {
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    type = 2;
}

Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    type = 2;
}

Stonewt::Stonewt() {
     stone = pounds = pds_left = 0;
     type = 2;
}

Stonewt::~Stonewt() {

}

void Stonewt::setType(int t) {
    this->type = t;
}

Stonewt Stonewt::operator+(const Stonewt & s) const {
    Stonewt stonewt;
    stonewt.stone = stone + s.stone;
    stonewt.pounds = pounds + s.pounds;
    stonewt.pds_left = pds_left + s.pds_left;
    return stonewt;
}

Stonewt Stonewt::operator-(const Stonewt & s) const {
    Stonewt stonewt;
    stonewt.stone = stone - s.stone;
    stonewt.pounds = pounds - s.pounds;
    stonewt.pds_left = pds_left - s.pds_left;
    return stonewt;
}

Stonewt Stonewt::operator*(const Stonewt & s) const {
    Stonewt stonewt;
    stonewt.stone = stone * s.stone;
    stonewt.pounds = pounds * s.pounds;
    stonewt.pds_left = pds_left * s.pds_left;
    return stonewt;
}

std::ostream & operator<<(std::ostream & os, const Stonewt & s) {
    switch (s.type) {
        case 0:
            cout << s.stone << " stone\n";
            break;
        case 1:
            cout << s.pds_left << " pounds\n";
            break;
        default:
            cout << s.pounds << " pounds\n";
            break;
    }
    return os;
}