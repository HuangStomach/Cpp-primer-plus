#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;
    double number;
    double sum = 0.0;

    for (int i = 0; i <= 5; ++i) {
        cout << "Value " << i << ": ";
        cin >> number;
        sum += number;
    }

    cout << "Sum to " << sum << endl;
    cout << "Average to " << sum / 5 << endl;
    
    return 0;
}
