#include <iostream>
#include <fstream>

int main(int argc, char const *argv[]) {
    using namespace std;

    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;
    outFile.open("carinfo.txt");

    cout << "Enter mobile";
    cin.getline(automobile, 50);
    cout << "Year";
    cin >> year;
    cout << "Enter price";
    cin >> a_price;
    d_price = 0.913 * a_price;

    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    
    outFile << automobile << endl;
    outFile << year << endl;
    outFile << a_price << endl;
    outFile << d_price << endl;

    return 0;
}
