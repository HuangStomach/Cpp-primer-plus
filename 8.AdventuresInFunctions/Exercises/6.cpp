#include <iostream>

using namespace std;

template <typename T>
T maxn(T[], int);

int main(int argc, char const *argv[]) {
    int ints[6] = { 2, 3, 9, 5, 7, 4 };
    cout << "Max is : " << maxn(ints, 6) << endl;
    double ds[4] = { 2.0, 3.0, 9.0, 5.0 };
    cout << "Max is : " << maxn(ds, 4) << endl;
    char const * cs[5] = { "abc", "asjiewe", "quejw", "adkoiweklmqwe", "we" };
    cout << "Max is : " << maxn(cs, 5) << endl;
}

template <typename T>
T maxn(T arr[], int n) {
    T max = arr[0];
    for (int i = 1; i < n; i++) {
        max = arr[i] > max ? arr[i] : max;
    }
    return max;
}

char const * maxn(char const * arr[], int n) {
    char const * max = arr[0];
    int len = strlen(max);
    for (int i = 1; i < n; i++) {
        if (strlen(arr[i]) > len) {
            max = arr[i];
            len = strlen(arr[i]);
        }
    }
    return max;
}
