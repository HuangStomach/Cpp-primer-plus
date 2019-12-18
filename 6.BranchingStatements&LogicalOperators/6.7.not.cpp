#include <iostream>
#include <climits>

bool is_int(double);

int main(int argc, char const *argv[]) {
    using namespace std;
    double num;

    cout << "Value: ";
    cin >> num;

    while (!is_int(num)) {
        cout << "Again: ";
        cin >> num;
    }
    int val = int(num);
    cout << val << " Bye" << endl;
    
    return 0;
}

bool is_int(double x) {
    if (x <= INT_MAX && x >= INT_MIN) return true;
    else return false;
}
