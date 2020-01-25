#include <iostream>

using namespace std;
long double probability();

int main(int argc, char const *argv[]) {

    cout << "You have one chance in ";
    cout << probability();
    cout << " of winning.\n";
    
    cout << "bye" << endl;
    return 0;
}


long double probability() {
    long double chance = 47 * 46 * 45 * 44 * 43;

    int total = 47;
    for (int i = 1; i <= 5; i++) {
        chance /= i;
    }

    chance *= 1 / 29;
    return chance;
}