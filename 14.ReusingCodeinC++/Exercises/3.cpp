#include <iostream>
#include <cstring>
#include "3.queuetp.h"
#include "3.workermi.h"

const int SIZE = 5;

int main(int argc, char const *argv[])
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Queue<Worker> queue(SIZE);

    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter employee\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL) {
            cout << "Plz enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q') break;
        switch (choice) {
        case 'w':
            queue.enqueue(*new Waiter);
            break;
        case 's':
            queue.enqueue(*new Singer);
            break;
        case 't':
            queue.enqueue(*new SingingWaiter);
            break;
        }
        cin.get();
    }
    
    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < queue.queuecount(); i++) {
        queue.dequeue();
    }
    cout << "Bye.\n";

    return 0;
}
