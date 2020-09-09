#include <iostream>
#include <string>
#include "15.5.queuetp.h"

using namespace std;

int main(int argc, char const *argv[]) {
    Queue<string> cs(5);
    string temp;

    while (!cs.isfull()) {
        cout << "Plz enter name: ";
        getline(cin, temp);
        cs.enqueue(temp);
    }
    cout << "full. begin!\n";

    while (!cs.isempty()) {
        cs.dequeue(temp);
        cout << "Now: " << temp << endl;
    }

    return 0;
}
