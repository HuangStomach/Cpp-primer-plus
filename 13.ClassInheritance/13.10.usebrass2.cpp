#include <iostream>
#include <string>
#include "13.7.brass.h"
const int CLIENTS = 4;

int main(int argc, char const *argv[]) {
    using std::cin;
    using std::cout;
    using std::endl;

    Brass * p_clients[CLIENTS];
    std::string temp;
    long tempnum;
    double tempbal;
    char kind;

    for (int i = 0; i < CLIENTS; i++) {
        cout << "Name: ";
        getline(cin, temp);
        cout << "number: ";
        cin >> tempnum;
        cout << "balance: ";
        cin >> tempbal;
        cout << "1 or 2: ";
        while (cin >> kind && (kind != '1' && kind != '2')) cout << "1 or 2: ";
        if (kind == '1') p_clients[i] = new Brass(temp, tempnum, tempbal);
        else {
            double tmax, trate;
            cout << "Enter limit: $";
            cin >> tmax;
            cout << "Rate: ";
            cin >> trate;
            p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
        }

        while (cin.get() != '\n') continue;
    }
    cout << endl;

    for (int i = 0; i < CLIENTS; i++) {
        p_clients[i]->ViewAcct();
        cout << endl;
    }
    
    for (int i = 0; i < CLIENTS; i++) {
        delete p_clients[i];
    
    cout << "Done.\n";
    return 0;
}
