#include <iostream>

using namespace std;
const int SIZE = 10;

int input(double[]);
void show(double[], int);
void average(double[], int);

int main(int argc, char const *argv[]) {
    double a[SIZE];
    int count = input(a);
    show(a, count);
    average(a, count);
    return 0;
}

int input(double a[]) {
    int count = 0;
    double num;

    cout << "input: ";
    cin >> num;
    while (num > 0.0 && count < 10) {
        a[count++] = num;
        cout << "input: ";
        cin >> num;
    }
    return count;
}

void show(double a[], int count) {
    for (int i = 0; i < count; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void average(double a[], int count) {
    int i;
    double sum = 0.0;
    for (i = 0; i < count && a[i] > 0.0; i++) {
        sum += a[i];
    }
    cout << "ave: " << sum / i << endl;
}