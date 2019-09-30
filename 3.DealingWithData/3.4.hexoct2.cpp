#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << hex;
    cout << "waist = " << waist << " (0x42 in hex)\n";
    cout << oct;
    cout << "inseam = " << inseam << " (042 in octal)\n";

    return 0;
}
