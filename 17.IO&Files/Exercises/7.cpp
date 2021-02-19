#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "7.store.h"

using namespace std;

void ShowStr(const string &);
void GetStrs(std::ifstream & fin, std::vector<std::string> & vistr);

int main(int argc, char const *argv[]) {
    vector<string> vostr;
    string temp;
    
    cout << "Enter strings:\n";
    while (getline(cin, temp) && temp[0] != '\0') vostr.push_back(temp);

    cout << "Here's your input.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);
    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    vector<string> vistr;
    ifstream fin("strings.data", ios_base::in | ios_base::binary);
    if (!fin.is_open()) {
        cerr << "Could not open file for input.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "Here's your file.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    return 0;
}

void ShowStr(const string & s) {
    cout << s << endl;
}

void GetStrs(std::ifstream & fin, std::vector<std::string> & vistr) {
    size_t len;
    while (fin.read((char *) & len, sizeof(std::size_t))) {
        std::string str;
        char ch;
        for (int i = 0; i < len; ++i) {
            fin.read(& ch, sizeof(char));
            str.push_back(ch);
        }

        vistr.push_back(str);
    }
}
