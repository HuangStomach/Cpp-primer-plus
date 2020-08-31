#include "1.wine.h"

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) {
    name = l;
    year = y;
    ArrayInt years(3);
    ArrayInt bottles(3);
    for (int i = 0; i < 3; i++) {
        years[i] = yr[i];
        bottles[i] = bot[i];
    }
    yandb = PairArray(years, bottles);
    
}

Wine::Wine(const char * l, int y) {
    name = l;
    year = y;
    ArrayInt years(year);
    ArrayInt bottles(year);
    yandb = PairArray(years, bottles);
}

void Wine::GetBottles() {
    cout << "Enter " << name << "data for " << year << " year(s)" << endl;
    for (int i = 0; i < year; i++) {
        cout << "Enter year: ";
        cin >> yandb.first()[i];
        cout << "Enter bottles for that year: ";
        cin >> yandb.second()[i];
    }
}

const string & Wine::Label() const {
    return name;
}

void Wine::Show() const {
    cout << "Wine: " << name << endl;
    cout << "Year    " << "Bottles" << endl;
    for (int i = 0; i < year; i++) {
        cout << yandb.first()[i] << "    " << yandb.second()[i] << endl;
    }
}

int Wine::sum() const {
    int re = 0;
    for (int i = 0; i < 3; i++) {
        re += yandb.second()[i];
    }
    return re;
}
