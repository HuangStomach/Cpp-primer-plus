#include <iostream>

using namespace std;

template<typename T>
T SumArray(T arr[], int n);

template<typename T>
T SumArray(T * arr[], int n);

struct debts {
    char name[50];
    double amount;
};

int main(int argc, char const *argv[]) {
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
        {"I W", 2400.0},
        {"U F", 1300.0},
        {"I S", 1800.0},
    };
    double * pd[3];

    for (int i = 0; i < 3; i++) pd[i] = &mr_E[i].amount;
    cout << "Sum Mr.E's: " << endl;
    cout << SumArray(things, 6) << endl;
    cout << SumArray(pd, 3) << endl;

    return 0;
}

template<typename T>
T SumArray(T arr[], int n) {
    cout << "template A" << endl;
    T sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

template<typename T>
T SumArray(T * arr[], int n) {
    cout << "template B" << endl;
    T sum = 0.0;
    for (int i = 0; i < n; i++) sum += *arr[i];
    return sum;
}
