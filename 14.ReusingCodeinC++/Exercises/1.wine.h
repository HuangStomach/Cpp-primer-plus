#ifndef WINE1
#define WINE1
#include <iostream>
#include <string>
#include <valarray>
#include "1.pair.cpp"

using namespace std;
typedef valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;
class Wine {
private:
    string name;
    int year;
    PairArray yandb;
public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    void Show() const;
    const string & Label() const;
    int sum() const;
};
#endif
