#include <iostream>
#include <cstdlib>
#include <ctime>
#include "12.10.queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(int argc, char const *argv[]) {
    using namespace std;
    srand(time(0));

    cout << "Enter Size: ";
    int qs;
    cin >> qs;
    Queue line(qs);

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
            if (line.isfull()) turnaways++;
            else {
                customers++;
                temp.set(cycle);
                line.enqueue(temp);
            }

            if (wait_time <= 0 && !line.isempty()) {
                line.dequeue(temp);
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if (wait_time > 0) wait_time--;
            sum_line += line.queuecount();
        }
    }

    return 0;
}

bool newcustiner(double x) {
    return (std::rand() * x / RAND_MAX < 1);
}
