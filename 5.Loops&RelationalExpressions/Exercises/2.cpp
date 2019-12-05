#include <iostream>
#include <array>
const int ArSize = 100;

using namespace std;

int main(int argc, char const *argv[]) {
    array<long double, ArSize> factorials;
    
    factorials[1] = factorials[0] = 1.0L;

    for (int i = 2; i <= ArSize; i++) factorials[i] = i * factorials[i - 1];
    for (int i = 0; i < ArSize; i++) cout << i << "!= " << factorials[i] << endl;
    
    return 0;
}
