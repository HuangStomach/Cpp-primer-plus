#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "../11.13.vector.h"

int main(int argc, char const *argv[]) {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    ofstream fout;
    const char * fn = "1.txt";
    fout.open(fn);
    if (!fout.is_open()) {
        cout << "Error" << endl;
        exit(EXIT_FAILURE);
    }
    
    
    cout << "Enter target distance (q to quit): ";
    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep)) break;
        fout << "Target Dis: " << target << ", Step size: " << dstep << endl;
        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            fout << result << endl;
            steps++;
        }
        
        cout << "After " << steps << " steps, the subject has the following location:\n";
        fout << "After " << steps << " steps, the subject has the following location:\n";

        cout << result << endl;
        fout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        fout << " or\n" << result << endl;
        cout << "Average outward distance per step = " << result.magval() / steps << endl;
        fout << "Average outward distance per step = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n') continue;
    fout.clear();
    fout.close();

    return 0;
}
