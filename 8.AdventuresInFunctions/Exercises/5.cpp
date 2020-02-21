#include <iostream>

using namespace std;

template <typename T>
T max5(T[5]);

int main(int argc, char const *argv[]) {
    int ints[5] = { 2, 3, 9, 5, 7 };
    cout << "Max is : " << max5(ints) << endl;
    double ds[5] = { 2.0, 3.0, 9.0, 5.0, 7.0 };
    cout << "Max is : " << max5(ds) << endl;
}

template <typename T>
T max5(T arr[5]) {
    T max = arr[0];
    for (int i = 1; i < 5; i++) {
        max = arr[i] > max ? arr[i] : max;
    }
    return max;
}