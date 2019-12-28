#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;

int main(int argc, char const *argv[]) {
    using namespace std;
    char filename[SIZE];
    ifstream inFile;
    
    cout << "name: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);
    if (!inFile.is_open()) {
        cout << "Error" << endl;
        exit(EXIT_FAILURE);
    }

    double value;
    double sum = 0.0;
    int count = 0;

    inFile >> value;
    while (inFile.good()) {
        ++count;
        sum += value;
        inFile >> value;
    }

    if (inFile.eof()) cout << "end" << endl;
    else if (inFile.fail()) cout << "miss" << endl;
    else cout << "unknown" << endl;
    
    if (count == 0) cout << "no data" << endl;
    else {
        cout << count << endl;
    }
    inFile.close();

    return 0;
}
