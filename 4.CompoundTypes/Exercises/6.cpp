#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
    string band;
    double weight;
    int k;
};

int main(int argc, char const *argv[]) {
    CandyBar snacks[3] = {
        {"Mocha MunchA", 2.3, 250},
        {"Mocha MunchB", 2.3, 250},
        {"Mocha MunchC", 2.3, 250},
    };

    for (int i = 0; i < 3; i++) {
        CandyBar snack = snacks[i];

        cout << "band: " << snack.band << endl;
        cout << "weight: " << snack.weight << endl;
        cout << "k: " << snack.k << endl;
    }
    
    return 0;
}
