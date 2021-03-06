#ifndef STONEWT6_H_
#define STONEWT6_H_
#include <iostream>

class Stonewt {
private:
    enum {Lbs_per_stn = 14};
    int stone;
    double pds_left; // 英石
    double pounds;
    int type;
public:
    Stonewt(double lbs);
    Stonewt(int stn, double lbs);
    Stonewt();
    ~Stonewt();
    void setType(int);
    Stonewt operator+(const Stonewt & s) const;
    Stonewt operator-(const Stonewt & s) const;
    Stonewt operator*(const Stonewt & s) const;
    bool operator>(const Stonewt & s) const { return pounds > s.pounds; }
    bool operator>=(const Stonewt & s) const { return pounds >= s.pounds; }
    bool operator<(const Stonewt & s) const { return pounds < s.pounds; }
    bool operator<=(const Stonewt & s) const { return pounds <= s.pounds; }
    bool operator==(const Stonewt & s) const { return pounds == s.pounds; }
    bool operator!=(const Stonewt & s) const { return pounds != s.pounds; }
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & s);
};
#endif
