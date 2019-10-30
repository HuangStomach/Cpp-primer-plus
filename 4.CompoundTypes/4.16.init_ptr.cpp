#include <iostream>

int main(int argc, char const *argv[]) {
    using namespace std;
    int higgens = 5;
    int *pt = &higgens;

    cout << "Value of higgen = " << higgens << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt << "; Value of pt = " << pt << endl;
    return 0;
}
