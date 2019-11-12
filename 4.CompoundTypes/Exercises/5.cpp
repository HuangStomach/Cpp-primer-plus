#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
    string band;
    double weight;
    int k;
};

int main(int argc, char const *argv[]) {
    CandyBar snack = {"Mocha Munch", 2.3, 250};

    cout << "band: " << snack.band << endl;
    cout << "weight: " << snack.weight << endl;
    cout << "k: " << snack.k << endl;
    
    return 0;
}
