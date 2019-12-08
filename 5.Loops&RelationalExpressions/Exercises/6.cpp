#include <iostream>
#include <string>

using namespace std;

struct car {
    string name;
    int year;
};

int main(int argc, char const *argv[]) {
    int count;
    cout << "Plz input count: ";
    cin >> count;
    car * cars = new car[count];
    for (int i = 0; i < count; i++) {
        cout << "Car " << i + 1;

        cout << "Plz enter the make: ";
        cin >> cars[i].name;
        cout << "Plz enter the year made: ";
        cin >> cars[i].year;
    }

    cout << "Here: ";
    for (size_t i = 0; i < count; i++) {
        cout << cars[i].name << " " << cars[i].year;
    }

    return 0;
}
