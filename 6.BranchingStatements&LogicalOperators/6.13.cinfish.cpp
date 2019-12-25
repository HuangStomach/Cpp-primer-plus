#include <iostream>

const int Max = 5;
int main(int argc, char const *argv[]) {
    using namespace std;

    double fish[Max];
    int i = 0;
    while (i < Max && cin >> fish[i]) {
        if (++i < Max) cout << "fish #" << i + 1 << ": ";
    }

    double total = 0.0;
    for (int j = 0; j < i; j++) {
        total += fish[j];
    }

    if (i == 0) cout << "No" << endl;
    else cout << total / i << endl;
    
    return 0;
}
