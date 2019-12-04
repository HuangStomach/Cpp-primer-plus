#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int l, r;
    cout << "Plz input l: ";
    cin >> l;

    cout << "Plz input r: ";
    cin >> r;

    int res;
    for (; l <= r; res += l++);
    cout << res << endl;
    
    return 0;
}
