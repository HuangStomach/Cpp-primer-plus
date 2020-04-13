#include <iostream>
#include "11.10.mytime3.h"

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca(2, 48);
    Time temp;

    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << temp << endl;
    temp = aida * 1.17;
    cout << temp << endl;
    cout << tosca * 10.0 << endl;

    return 0;
}
