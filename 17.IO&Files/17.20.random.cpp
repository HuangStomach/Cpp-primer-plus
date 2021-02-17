#include <iostream>
#include <fstream>
#include <ostream>
#include <iomanip>
#include <cstdlib>

const int LIM = 20;
struct planet {
    char name[20];
    double population;
    double g;
};

const char * file = "planets.data";
inline void eatline() { while (std::cin.get() != '\n') continue; }

int main(int argc, char const *argv[]) {
    using namespace std;
    planet pl;
    cout << fixed;

    fstream finout;
    finout.open(file, ios_base::in | ios_base::out | ios_base::binary);
    int ct = 0;
    if (finout.is_open()) {
        finout.seekg(0); // begin
        cout << "contents:\n";
        while (finout.read((char *) &pl, sizeof pl)) {
            cout << ct++ << ": " << setw(LIM) << pl.name << ": " 
                << setprecision(0) << setw(12) << pl.population
                << setprecision(2) << setw(6) << pl.g << endl;
        }

        if (finout.eof()) {
            finout.clear();
        }
        else {
            cerr << "Error" << file << ".\n";
            exit(EXIT_FAILURE);
        }
    }
    else {
        cerr << "Error" << file << ".\n";
        exit(EXIT_FAILURE);
    }
    
    // change
    cout << "Enter the record number you wish to change: ";
    long rec;
    cin >> rec;
    eatline();
    if (rec < 0 || rec > ct) {
        cerr << "out" << file << ".\n";
        exit(EXIT_FAILURE);
    }
    streampos place = rec * sizeof pl;
    finout.seekg(place);
    if (finout.fail()) {
        cerr << "Error" << file << ".\n";
        exit(EXIT_FAILURE);
    }

    finout.read((char *) &pl, sizeof pl);
    cout << "your selection:\n";
    cout << rec << ": " << setw(LIM) << pl.name << ": " 
        << setprecision(0) << setw(12) << pl.population
        << setprecision(2) << setw(6) << pl.g << endl;
    if (finout.eof()) finout.clear();

    cout << "Enter planet name:\n";
    cin.get(pl.name, 20);
    eatline();
    cout << "population: ";
    cin >> pl.population;
    cout << "Enter gravity: ";
    cin >> pl.g;
    finout.seekp(place);
    finout.write((char *)&pl, sizeof pl) << flush;
    if (finout.fail()) {
        cerr << "Error" << file << ".\n";
        exit(EXIT_FAILURE);
    }

    ct = 0;
    finout.seekg(0);
    cout << "contents:\n";
    while (finout.read((char *) &pl, sizeof pl)) {
        cout << ct++ << ": " << setw(LIM) << pl.name << ": " 
            << setprecision(0) << setw(12) << pl.population
            << setprecision(2) << setw(6) << pl.g << endl;
    }
    finout.close();
    cout << "Done.\n";

    return 0;
}
