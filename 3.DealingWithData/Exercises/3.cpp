#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    double a;
    double b;
    double c;
    const double unit = 60.0;


    cout << "Enter a latitude in degrees, mintutes, and seconds:" << endl;
    cout << "First, enter the degree: " ;
    cin >> a;
    cout << "Next, enter the minutes of arc: ";
    cin >> b;
    cout << "Finally, enter the seconds of arc: ";
    cin >> c;

    cout << a << " degress " << b << " mintues " << c << "seconds = " << a + (b / unit) + c / (unit * unit) << endl;
    
    return 0;
}
