#include <iostream>
#include <cstdlib>
#include <ctime>
#include "14.15.stcktp1.h"

using namespace std;
const int Num = 10;

int main(int argc, char const *argv[]) {
    srand(time(0));
    cout << "size: " << endl;
    int stacksize;
    cin >> stacksize;

    Stack<const char *> st(stacksize);

    const char * in[Num] = {
        "1: A", "2: B", "3: C", "4: D", "5 : E",
        "6: F", "7: G", "8: H", "9: I", "10: J"
    };
    const char * out[Num];

    int processed = 0;
    int nextin = 0;
    while (processed < Num) {
        if (st.isempty()) st.push(in[nextin++]);
        else if (st.isfull()) st.pop(out[processed++]);
        else if (rand() % 2 && nextin < Num) st.push(in[nextin++]);
        else st.pop(out[processed++]);
    }

    for (int i = 0; i < Num; i++) cout << out[i] << endl;
    
    return 0;
}
