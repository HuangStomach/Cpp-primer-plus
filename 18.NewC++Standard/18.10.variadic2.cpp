#include <iostream>
#include <string>

using namespace std;
void show_list() {}

template<typename T>
void show_list(const T& value) {
    cout << value << "\n";
}

template<typename T, typename... Args>
void show_list(const T& value, const Args&... args) {
    cout << value << ", ";
    show_list(args...);
}

int main(int argc, char const *argv[]) {
    int n = 14;
    double x = 2.71828;
    string mr = "Mr. String objects!";
    show_list(n, x);
    show_list(x * x, '!', 7, mr);

    return 0;
}
