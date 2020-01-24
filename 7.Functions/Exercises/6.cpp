#include <iostream>

using namespace std;
int fill_array(double[], int);
void show_array(double[], int);
void reverse_array(double[], int);

int main(int argc, char const *argv[]) {
    double * arr;
    int length = fill_array(arr, 10);
    show_array(arr, length);
    reverse_array(arr, length);
    show_array(arr, length);
    return 0;
}

int fill_array(double arr[], int length) {
    int i = 0;
    double num = 0.0;
    cout << "Input: ";
    cin >> num;
    while (i < length && num > 0) {
        arr[i++] = num;
        cout << "Input: ";
        cin >> num;
    }
    return i;
}
void show_array(double arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void reverse_array(double arr[], int length) {
    for (int i = 0; i < length / 2; i++) {
        double temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
}
