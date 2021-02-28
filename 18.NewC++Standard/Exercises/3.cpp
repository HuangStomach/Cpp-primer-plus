#include <iostream>
#include <string>

using namespace std;

template<typename T>
long double sum_value(T a) {
    return (long double)a;
}

template<typename T, typename... Args>
long double sum_value(T a, const Args... args) {
    return (long double)a + sum_value(args...);
}

int main(int argc, char const *argv[]) {
    cout << sum_value(22.33, 52.221, 92.36, 10.54, 84.63) << endl;
    cout << sum_value('A', 23.11, 78, 0) << endl;

    return 0;
}
