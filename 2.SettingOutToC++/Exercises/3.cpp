#include <iostream>

using namespace std;

void mice();
void run();

int main(int argc, char const *argv[]) {
    mice();
    mice();
    run();
    run();
    return 0;
}

void mice() {
    cout << "There blind mice" << endl;
}

void run() {
    cout << "See how they run" << endl;
}