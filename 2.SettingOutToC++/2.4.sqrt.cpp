#include <cmath>
#include <iostream>

int main(int argc, char const *argv[]) {
    using namespace std;

    double area;
    cout << "Enter pls";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "Square " << side
        << "feet to the side." << endl;
    cout << "How fascinating!" << endl;

    return 0;
}
