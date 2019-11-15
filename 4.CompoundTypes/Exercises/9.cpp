#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
    string band;
    double weight;
    int k;
};

int main(int argc, char const *argv[]) {
    CandyBar *snacks = new CandyBar[3];

    for (int i = 0; i < 3; i++) {

        cout << "band: " << snacks[i].band << endl;
        cout << "weight: " << snacks[i].weight << endl;
        cout << "k: " << snacks[i].k << endl;
    }
    
    return 0;
}
