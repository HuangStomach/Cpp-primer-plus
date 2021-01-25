#include <iostream>
#include <string>
#include <algorithm>

int main(int argc, char const *argv[]) {
    using namespace std;
    string letters;
    cout << "Enter the letter grouping (quit to quit): ";
    while (cin >> letters && letters != "quit") {
        cout << "Permutations of " << letters << endl;
        sort(letters.begin(), letters.end());
        cout << letters << endl;
        while (next_permutation(letters.begin(), letters.end())) cout << letters << endl;
        cout << "Next";
    }
    cout << "Done.\n";
    return 0;
}
