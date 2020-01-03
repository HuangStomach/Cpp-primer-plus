#include <iostream>
#include <fstream>
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

    int count = 0;
    while (!inFile.eof()) {
        count++;
        inFile.get();
    }
    
    cout << count << endl;
    inFile.close();

    return 0;
}
