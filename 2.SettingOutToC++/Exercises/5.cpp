#include<iostream>

using namespace std;

double degree(double);

int main(int argc, char const *argv[]) {
    double celsius;
    cout << "Plz enter a Celsius value: ";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << degree(celsius) << " degrees Fahrenheit" << endl;
    return 0;
}

double degree(double celsius) {
    return 1.8 * celsius + 32.0;
}