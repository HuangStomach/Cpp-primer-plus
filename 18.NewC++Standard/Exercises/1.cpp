#include <iostream>
#include <initializer_list>

using namespace std;

template<typename T>
T average_list(const initializer_list<T> & list);

int main(int argc, char const *argv[]) {
    auto q = average_list({15.4, 10.7, 9.0});
    cout << q << endl;

    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;

    auto ad = average_list<double>({'A', 70, 65.33});
    cout << ad << endl;

    return 0;
}

template<typename T>
T average_list(const initializer_list<T> & list) {
    T tot = 0;
    int n = list.size();

    if (n > 0) for (auto p = list.begin(); p != list.end(); p++) {
        tot += *p;
    }

    return n > 0 ? tot / n : 0;
}
