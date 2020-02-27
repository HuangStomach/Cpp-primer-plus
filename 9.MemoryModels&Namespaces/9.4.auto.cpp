#include <iostream>

using namespace std;
void oil(int x);

int main(int argc, char const *argv[]) {
    int texas = 31;
    int year = 2011;

    cout << "In main(), texas = " << texas << ", &texas = " << &texas << endl;
    cout << "In main(), year = " << year << ", &year = " << &year << endl;
    oil(texas);
    cout << "In main(), texas = " << texas << ", &texas = " << &texas << endl;
    cout << "In main(), year = " << year << ", &year = " << &year << endl;

    return 0;
}

void oil(int x) {
    int texas = 5;
    cout << "In oil(), texas = " << texas << ", &texas = " << &texas << endl;
    cout << "In oil(), x = " << x << ", &x = ";
    cout << &x << endl;
    {
        int texas = 113;
        cout << "In block, texas = " << texas;
        cout << ", &texas = " << &texas << endl;
        cout << "In block, x = " << x << ", &x = ";
        cout << &x << endl;
    }
    cout << "Post-block texas = " << texas;
    cout << ", &texas = " << &texas << endl;
}
