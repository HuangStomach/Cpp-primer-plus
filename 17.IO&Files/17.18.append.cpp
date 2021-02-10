#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

const char * file = "guest.txt";
int main(int argc, char const *argv[]) {
    using namespace std;
    char ch;
    ifstream fin;
    fin.open(file);

    if (fin.is_open()) {
        cout << "Here " << file << " file:\n";
        while (fin.get(ch)) cout << ch;
        fin.close();
    }

    ofstream fout(file, ios_base::out | ios_base::app);
    if (!fout.is_open()) {
        exit(EXIT_FAILURE);
    }
    
    cout << "Enter guest names (enter a blank line to quit):\n";
    string name;
    while (getline(cin, name) && name.size() > 0) {
        fout << name << endl;
    }
    fout.close();

    fin.clear();
    fin.open(file);
    if (fin.is_open()) {
        cout << "Here " << file << " file:\n";
        while (fin.get(ch)) cout << ch;
        fin.close();
    }
    cout << "Done.\n";

    return 0;
}
