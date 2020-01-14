#include <iostream>

const int Max = 5;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main(int argc, char const *argv[]) {
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0) {
        cout << "Enter factor: ";
        double factor;
        while (!(cin >> factor)) {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Bad input;";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double ar[], int limit) {
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++) {
        cout << "Enter: ";
        cin >> temp;
        if (!cin) {
            cin.clear();
            while (cin.get() != '\n') continue;
            cout << "Bad input;";
            break;
        }
        else if (temp < 0) break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n) {
    using namespace std;
    for (int i = 0; i < n; i++) {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n) {
    for (int i = 0; i < n; i++) {
        ar[i] *= r;
    }
}