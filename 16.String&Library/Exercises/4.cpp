#include <iostream>
#include <list>

using namespace std;

int reduce(long ar[], int n);

int main(int argc, char const *argv[]) {
    long stuff[5] = {1, 2, 4, 8, 6};
    cout << reduce(stuff, 5) << endl;
    long more[6] = {6, 4, 2, 4, 6, 5};
    cout << reduce(more, 6) << endl;
    return 0;
}

int reduce(long ar[], int n) {
    list<int> re;
    re.insert(re.begin(), ar, ar + n);
    re.unique();
    re.sort();
    return re.size();
}

