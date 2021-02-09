#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char const *argv[]) {
    using namespace std;
    if (argc == 1) {
        cerr << "Usage: " << argv[0] << " filename[s]\n";
        exit(EXIT_FAILURE);
    }

    ifstream fin;
    long count;
    long total = 0;
    char ch;

    for (int file = 1; file < argc; file++) {
        fin.open(argv[file]);
        if (!fin.is_open()) {
            cerr << "Cannot open " << argv[0] << endl;
            fin.clear();
            continue;
        }
        count = 0;
        while (fin.get(ch)) count++;
        cout << count << " char in " << argv[file] << endl;
        total += count;
        fin.clear();
        fin.close();
    }
    cout << total << "chars is in file.\n";

    return 0;
}
