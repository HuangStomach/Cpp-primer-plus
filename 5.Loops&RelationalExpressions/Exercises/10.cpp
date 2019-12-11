#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int rows;
    cout << "Plz enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < rows - i - 1; ++j) {
            cout << ".";
        }
        for (int j = 0; j < i + 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
