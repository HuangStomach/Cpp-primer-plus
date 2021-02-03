#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <queue>
#include "6.h"

const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(int argc, char const *argv[]) {
    using namespace std;
    srand(time(0));

    cout << "Enter Size: ";
    int qs;
    cin >> qs;
    queue<Item> line;

    cout << "sim hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours;

    cout << "average: ";
    double perhour;
    cin >> perhour;
    double min_per_cust;
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;

    for (int cycle = 0; cycle < cyclelimit; cycle++) {
        if (newcustomer(min_per_cust)) {
            if (line.size() == qs) turnaways++;
            else {
                customers++;
                temp.set(cycle);
                line.push(temp);
            }

            if (wait_time <= 0 && !line.empty()) {
                temp = line.front();
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
                line.pop();
            }
            if (wait_time > 0) wait_time--;
            sum_line += line.size();
        }
    }

    return 0;
}

bool newcustiner(double x) {
    return (std::rand() * x / RAND_MAX < 1);
}
