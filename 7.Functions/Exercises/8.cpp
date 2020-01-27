#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const char * Snames[] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double pa[]);
void show(double da[]);

int main(int argc, char const *argv[]) {
    double * expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(double ** pa) {
    for (int i = 0; i < Seasons; i++) {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> *(pa)[i];
    }
}

void show(double * da) {
    double total = 0.0;
    for (int i = 0; i < Seasons; i++) {
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << total << endl;
}
