#include <iostream>

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 63;
    cout << "Today's water temperature: ";
    cout.setf(ios_base::showpos);
    cout << temperature << endl;

    cout << "For programers that's\n";
    cout << std::hex << temperature << endl;
    cout.setf(ios_base::uppercase);
    cout.setf(ios_base::showbase);
    cout << "or\n";
    cout << temperature << endl;
    cout << "How " << true << "! oops -- How";
    cout.setf(ios_base::boolalpha);
    cout << true << "!\n";

    return 0;
}
