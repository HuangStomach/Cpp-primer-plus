#include <iostream>
#include <cstdlib>
#include <ctime>
#include "5.queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(int argc, char const *argv[]) {
    using namespace std;
    srand(time(0));

    cout << "Enter Size: ";
    int qs;
    cin >> qs;
    Queue lineA(qs);
    Queue lineB(qs);

    cout << "sim hours: ";
    int hours;
    cin >> hours;
    long cyclelimit = MIN_PER_HR * hours;

    long served = 0;
    long line_wait = 0;
    double perhour = 1;
    double min_per_cust;

    do {
        Item temp;
        long turnaways = 0;
        long customers = 0;
        long sum_line = 0;
        int wait_timeA = 0;
        int wait_timeB = 0;

        served = 0;
        line_wait = 0;
        min_per_cust = MIN_PER_HR / perhour;

        for (int cycle = 0; cycle < cyclelimit; cycle++) {
            if (newcustomer(min_per_cust)) {
                if (lineA.isfull() && lineB.isfull()) turnaways++;
                else {
                    customers++;
                    temp.set(cycle);
                    if (lineB.queuecount() > lineA.queuecount()) lineA.enqueue(temp);
                    else lineB.enqueue(temp);
                }

                if (wait_timeA <= 0 && !lineA.isempty()) {
                    lineA.dequeue(temp);
                    wait_timeA = temp.ptime();
                    line_wait += cycle - temp.when();
                    served++;
                }

                if (wait_timeB <= 0 && !lineB.isempty()) {
                    lineB.dequeue(temp);
                    wait_timeB = temp.ptime();
                    line_wait += cycle - temp.when();
                    served++;
                }

                if (wait_timeA > 0) wait_timeA--;
                if (wait_timeB > 0) wait_timeB--;
                sum_line += (lineA.queuecount() + lineB.queuecount()) / 2;
            }
        }
        
        perhour++;
    } while (((double)line_wait / served) > 1);

    cout << "wait_time: " << (double)line_wait / served << endl;
    cout << "perhour: " << perhour << endl;
    return 0;
}

bool newcustomer(double x) {
    return (std::rand() * x / RAND_MAX < 1);
}
