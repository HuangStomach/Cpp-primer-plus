#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

struct Big {
    double stuff[20000];
};

int main(int argc, char const *argv[]) {
    Big * pb;
    try {
        cout << "Get big block:\n";
        pb = new Big[10000];
        cout << "past:\n";
    }
    catch(bad_alloc & e) {
        cout << e.what() << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Memory successfully allocated\n";
    pb[0].stuff[0] = 4;
    cout << pb[0].stuff[0] << endl;
    delete[] pb;

    return 0;
}

