#include <iostream>
#include <string>
#include "3.dma.h"
const int CLIENTS = 4;

int main(int argc, char const *argv[]) {
    using std::cin;
    using std::cout;
    using std::endl;

    ABC * p_clients[CLIENTS];
    char * label;
    int rating;
    char kind;

    for (int i = 0; i < CLIENTS; i++) {
        cout << "Label: ";
        cin.getline(label, 50);
        cout << "Rating: ";
        cin >> rating;
        cout << "1 , 2 or 3: ";
        while (cin >> kind && (kind != '1' && kind != '2' && kind != '3')) cout << "1 , 2 or 3: ";
        if (kind == '1') p_clients[i] = new baseDMA(label, rating);
        else if (kind == '2') {
            char * color = new char[40];
            cout << "Color: ";
            cin >> color;
            p_clients[i] = new lacksDMA(color, label, rating);
            delete []color;
        }
        else {
            char * style = new char[40];
            cout << "Style: ";
            cin >> style;
            p_clients[i] = new hasDMA(style, label, rating);
            delete []style;
        }

        while (cin.get() != '\n') continue;
    }
    cout << endl;

    for (int i = 0; i < CLIENTS; i++) {
        p_clients[i]->View();
        cout << endl;
    }
    
    for (int i = 0; i < CLIENTS; i++) {
        delete p_clients[i];
    }
    
    cout << "Done.\n";
    return 0;
}
