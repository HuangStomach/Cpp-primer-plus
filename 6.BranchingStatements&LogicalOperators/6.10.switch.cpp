#include <iostream>

using namespace std;
void showmenu();
void report();
void comfort();

int main(int argc, char const *argv[]) {
    showmenu();
    int choice;

    cin >> choice;
    while (choice != 5) {
        switch (choice) {
        case 1: cout << "\a\n";
            break;
        case 2: report();
            break;
        case 3: cout << "in all day.\n";
            break;
        case 4: comfort();
            break;
        default:
            break;
        }
        showmenu();
        cin >> choice;
    }
    
    cout << "Bye!";
    return 0;
}
