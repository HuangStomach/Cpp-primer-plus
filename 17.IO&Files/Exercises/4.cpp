#include <iostream>
#include <string>
#include <fstream>
#include <ostream>

int main(int argc, char const *argv[]) {
    using namespace std;
    string file = argv[1];
    cout << fixed;

    fstream fin1;
    fstream fin2;
    fstream fout;
    fin1.open("4.1.txt");
    fin2.open("4.2.txt");
    fout.open(file, ios_base::out | ios_base::app);

    char ch;
    if (fin1.is_open() && fin2.is_open()) {
        string line1;
        string line2;
        getline(fin1, line1);
        getline(fin2, line2);
        line1.append(" ").append(line2);

        while (line1.size() > 1) {
            fout << line1 << endl;
            getline(fin1, line1);
            getline(fin2, line2);
            line1.append(" ").append(line2);
        }
    }
    else {
        cerr << "Error" << file << ".\n";
        fin1.close();
        fin2.close();
        exit(EXIT_FAILURE);
    }
    
    fin1.close();
    fin2.close();
    fout.close();
    cout << "Done.\n";

    return 0;
}
