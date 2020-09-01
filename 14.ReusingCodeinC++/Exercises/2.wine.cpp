#include "2.wine.h"

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : string(l) {
    year = y;
    ArrayInt years(3);
    ArrayInt bottles(3);
    for (int i = 0; i < 3; i++) {
        years[i] = yr[i];
        bottles[i] = bot[i];
    }
    PairArray::operator=(PairArray(years, bottles));
}

Wine::Wine(const char * l, int y) : string(l) {
    year = y;
    ArrayInt years(year);
    ArrayInt bottles(year);
    PairArray::operator=(PairArray(years, bottles));
}

void Wine::GetBottles() {
    cout << "Enter " << (const string &)*this << "data for " << year << " year(s)" << endl;
    for (int i = 0; i < year; i++) {
        cout << "Enter year: ";
        cin >> PairArray::first()[i];
        cout << "Enter bottles for that year: ";
        cin >> PairArray::second()[i];
    }
}

const string & Wine::Label() const {
    return (const string &)*this;
}

void Wine::Show() const {
    cout << "Wine: " << (const string &)*this << endl;
    cout << "Year    " << "Bottles" << endl;
    for (int i = 0; i < year; i++) {
        cout << PairArray::first()[i] << "    " << PairArray::second()[i] << endl;
    }
}

int Wine::sum() const {
    int re = 0;
    for (int i = 0; i < 3; i++) {
        re += PairArray::second()[i];
    }
    return re;
}
