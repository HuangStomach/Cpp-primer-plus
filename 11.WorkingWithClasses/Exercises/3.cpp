#include <iostream>
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
    
    cout << "Enter target distance (q to quit): ";
    int max = -1;
    int min = INT32_MAX;
    int num = 0;
    int sum = 0;

    while (cin >> target) {
        cout << "Enter step length: ";
        if (!(cin >> dstep)) break;

        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        
        cout << "After " << steps << " steps, the subject has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = " << result.magval() / steps << endl;

        max = steps > max ? steps : max;
        min = steps < min ? steps : min;
        sum += steps;
        num++;

        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Max steps is: " << max << endl;
    cout << "Min steps is: " << max << endl;
    cout << "Average steps is: " << sum / num << endl;

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n') continue;

    return 0;
}
