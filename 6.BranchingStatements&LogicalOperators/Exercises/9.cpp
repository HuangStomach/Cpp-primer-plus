#include <iostream>
#include <fstream>
#include <string>

using namespace std;
const int strSize = 80;

struct Patron {
    char name[strSize];
    double amount;
};

int main(int argc, char const *argv[]) {
    ifstream inFile;
    
    inFile.open("9.txt");
    if (!inFile.is_open()) {
        cout << "Error" << endl;
        exit(EXIT_FAILURE);
    }

    char num[strSize];
    inFile.getline(num, strSize);
    int size = atoi(num);

    Patron *patrons = new Patron[size];

    char price[strSize];
    for (int i = 0; i < size && inFile.good(); i++) {
        inFile.getline(patrons[i].name, strSize);
        inFile.getline(price, strSize);
        patrons[i].amount = atoi(price);
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
