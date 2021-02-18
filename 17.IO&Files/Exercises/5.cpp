#include <iostream>
#include <string>
#include <list>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {
    string temp;
    ifstream fin;

    list<string> mat;
    fin.open("5.mat.dat");
    if (!fin.is_open()) exit(0);
    getline(fin, temp);
    while (temp.size() > 0) {
        mat.push_back(temp);
        getline(fin, temp);
    }
    fin.close();
    
    list<string> pat;
    fin.open("5.pat.dat");
    if (!fin.is_open()) exit(0);
    getline(fin, temp);
    while (temp.size() > 0) {
        pat.push_back(temp);
        getline(fin, temp);
    }
    fin.close();

    list<string> total;
    total.merge(mat);
    total.merge(pat);
    total.sort();
    total.unique();

    while (total.size() > 0) {
        cout << total.front() << " ";
        total.pop_front();
    }
    cout << endl;
    
    return 0;
}

