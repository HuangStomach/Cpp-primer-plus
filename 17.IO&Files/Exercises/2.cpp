#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {
    string name = argv[1];

    ofstream fout(name, ios_base::out | ios_base::app);
    if (!fout.is_open()) {
        exit(EXIT_FAILURE);
    }
    
    cout << "Enter something:\n";
    string sth;
    while (getline(cin, name) && name.size() > 0) {
        fout << name << endl;
    }
    fout.close();
    cout << "Done.\n";

    return 0;
}
