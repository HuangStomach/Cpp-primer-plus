#include "4.person.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Person::~Person() {}

void Person::Show() const {
    cout << "Firstname: " << firstname << endl;
    cout << "Lastname: " << lastname << endl;
}

double Gunslinger::Draw() const {
    return time;
}

void Gunslinger::Show() const {
    Person::Show();
    cout << "Mark: " << mark << endl;
    cout << "Time: " << Draw() << endl;
}

int PokerPlayer::Draw() const {
    return rand() % 52;
}

double BadDude::Gdraw() const {
    return Gunslinger::Draw();
}

int BadDude::Cdraw() const {
    return PokerPlayer::Draw();
}

void BadDude::Show() const {
    Person::Show();
    Gunslinger::Show();
    cout << "Next Card:" << Cdraw() << endl;
}
