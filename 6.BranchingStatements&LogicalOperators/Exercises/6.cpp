#include <iostream>
#include <string>

using namespace std;

struct Patron {
    string name;
    double amount;
};

int main(int argc, char const *argv[]) {
    int size;
    cout << "几口子: ";
    cin >> size;

    Patron *patrons = new Patron[size];

    for (int i = 0; i < size; i++) {
        cout << "姓名: ";
        cin >> patrons[i].name;
        cout << "金额: ";
        cin >> patrons[i].amount;
    }

    int count = 0;
    cout << "Grand Patrons" << endl;
    for (int i = 0; i < size; i++) {
        if (patrons[i].amount > 10000) {
            count++;
            cout << patrons[i].name << ": " << patrons[i].amount << endl;
        }
    }
    if (count == 0) cout << "none." << endl;
    count = 0;

    cout << "Patrons" << endl;
    for (int i = 0; i < size; i++) {
        if (patrons[i].amount <= 10000) {
            count++;
            cout << patrons[i].name << ": " << patrons[i].amount << endl;
        }
    }
    if (count == 0) cout << "none." << endl;

    delete [] patrons;
    return 0;
}
