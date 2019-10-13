#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    long long all;
    long long us;


    cout << "Enter the world's population: ";
    cin >> all;
    cout << "Enter the us's population: ";
    cin >> us;
    cout << "The population of the US is " << double(us) / double(all) * 100 << "% of the world population";
    
    
    return 0;
}
