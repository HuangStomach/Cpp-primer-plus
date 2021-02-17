#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

inline void eatline() { while (std::cin.get() != '\n') continue; }

struct planet {
    char name[20];
    double population;
    double g;
};

const char * file = "planets.data";

int main(int argc, char const *argv[]) {
    using namespace std;
    planet pl;
    cout << fixed << right;

    ifstream fin;
    fin.open(file, ios_base:: in | ios_base::binary);
    if (fin.is_open()) {
        cout << "contents:\n";
        while (fin.read((char *) &pl, sizeof pl)) {
            cout << setw(20) << pl.name << ": " << setprecision(0) << setw(12) << pl.population
                << setprecision(2) << setw(6) << pl.g << endl;
        }
        fin.close();
    }
    
    ofstream fout(file, ios_base::out | ios_base::app | ios_base::binary);
    if (!fout.is_open()) {
        exit(EXIT_FAILURE);
    }

    cout << "Enter planet name:\n";
    cin.get(pl.name, 20);
    while (pl.name[0] != '\0') {
        eatline();
        cout << "population: ";
        cin >> pl.population;
        cout << "Enter gravity: ";
        cin >> pl.g;
        eatline();
        fout.write((char *) &pl, sizeof pl);
        cout << "Enter name: ";
        cin.get(pl.name, 20);
    }
    fout.close();

    fin.clear();
    fin.open(file, ios_base::in | ios_base::binary);
    if (fin.is_open()) {
        cout << "contents:\n";
        while (fin.read((char *) &pl, sizeof pl)) {
            cout << setw(20) << pl.name << ": " << setprecision(0) << setw(12) << pl.population
                << setprecision(2) << setw(6) << pl.g << endl;
        }
        fin.close();
    }
    cout << "Done.\n";

    return 0;
}
