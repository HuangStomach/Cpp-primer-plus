#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int i = 0;
    int a = 1;
    
    cout << "来两下: ";
    cin >> a;
    while (a != 0) {
        i += a;
        cout << "现在是: " << i << endl;
        cout << "来两下: ";
        cin >> a;
    }
    cout << "gg" << endl;
    
    return 0;
}
