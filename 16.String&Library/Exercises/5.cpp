#include <iostream>
#include <string>
#include <list>

using namespace std;

template <class T>
int reduce(T ar[], int n);

int main(int argc, char const *argv[]) {
    long stuff[7] = {1, 2, 4, 8, 6, 4, 1};
    cout << reduce(stuff, 7) << endl;
    string more[6] = {"6", "4", "2", "4", "6", "5"};
    cout << reduce(more, 6) << endl;
    return 0;
}

template <class T>
int reduce(T ar[], int n) {
    list<T> re;
    re.insert(re.begin(), ar, ar + n);
    re.sort();
    re.unique();
    return re.size();
}

