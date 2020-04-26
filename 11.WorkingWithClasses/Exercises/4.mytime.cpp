#include <iostream>
#include "4.mytime.h"

Time::Time() {
    hours = minutes = 0;
}

Time::Time(int h, int m) {
    hours = h;
    minutes = m;
}

void Time::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h) {
    hours += h;
}

void Time::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time operator+(const Time & t, const Time & b) {
    Time sum;
    sum.minutes = b.minutes + t.minutes;
    sum.hours = b.hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time operator-(const Time & t, const Time & b) {
    Time diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = b.minutes + 60 * b.hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time operator*(const Time & t, const Time & b) {
    Time result;
    long totalm = t.hours * b.hours + t.minutes * t.minutes;
    result.minutes = totalm % 60;
    result.hours = totalm / 60;
    return result;
}

Time operator*(double mult, const Time & t) {
    return t * mult;
}

Time operator*(const Time & t, double mult) {
    Time result;
    long totalm = t.hours * mult * 60 + t.minutes * mult;
    result.minutes = totalm % 60;
    result.hours = totalm / 60;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Time & t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}
