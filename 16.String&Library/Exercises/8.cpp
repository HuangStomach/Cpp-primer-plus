#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(int argc, char const *argv[]) {
    string temp;

    list<string> mat;
    cout << "Mat: " << endl;
    cout << "quit to quit" << endl;
    getline(cin, temp);
    while (temp != "quit") {
        mat.push_back(temp);
        cout << "another name?" << endl;
        getline(cin, temp);
    }
    
    list<string> pat;
    cout << "Pat: " << endl;
    cout << "quit to quit" << endl;
    getline(cin, temp);
    while (temp != "quit") {
        pat.push_back(temp);
        cout << "another name?" << endl;
        getline(cin, temp);
    }

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

