#include<iostream>

using namespace std;

double convert(double);

int main(int argc, char const *argv[]) {
    double ly;
    cout << "Plz enter the number of light years: ";
    cin >> ly;
    cout << ly << "light years = " << convert(ly) << " units" << endl;
    return 0;
}

double convert(double ly) {
    return 63240.0 * ly;
}