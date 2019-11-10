#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
    const int len = 80;

    cout << "What's your first name? ";
    char f[len];
    cin.getline(f, len);

    cout << "What's your last name? ";
    char l[len];
    cin.getline(l, len);

    char all[len];
    strcpy(all, l);
    strcat(all, ", ");
    strcat(all, f);


    cout << "Here is the info in a single string: " << all << endl; 

    return 0;
}
