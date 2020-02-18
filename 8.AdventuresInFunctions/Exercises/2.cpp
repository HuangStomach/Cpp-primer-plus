#include <iostream>
#include <string>

using namespace std;

struct CandyBar {
    string name;
    double weight;
    int heat;
};

void set(CandyBar *, string name = "Millennium Munch", double weight = 2.85, int heat = 30);
void show(const CandyBar *);

int main(int argc, char const *argv[]) {
    CandyBar candy;
    set(&candy);
    show(&candy);
    return 0;
}

void set(CandyBar * candy, string name, double weight, int heat) {
    candy->name = name;
    candy->weight = weight;
    candy->heat = heat;
}

void show(const CandyBar * candy) {
    cout << candy->name << endl;
    cout << candy->weight << endl;
    cout << candy->heat << endl;
}