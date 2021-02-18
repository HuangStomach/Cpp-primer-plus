#include <iostream>
#include <string>
#include <fstream>
#include <ostream>

int main(int argc, char const *argv[]) {
    using namespace std;
    string file = argv[1];
    cout << fixed;

    fstream fin;
    fstream fout;
    fin.open("3.txt");
    fout.open(file, ios_base::out | ios_base::app);

    char ch;
    if (fin.is_open()) {
        while (fin.get(ch)) {
            fout << ch;
        }

        fin.clear();
        fin.close();            
    }
    else {
        cerr << "Error" << file << ".\n";
        exit(EXIT_FAILURE);
    }
    
    fout.close();
    cout << "Done.\n";

    return 0;
}
