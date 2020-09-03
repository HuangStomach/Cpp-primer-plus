#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string firstname;
    string lastname;
public:
    Person(): firstname("John"), lastname("Doe") {}
    Person(const std::string & f, const std::string & l): firstname(f), lastname(l) {}
    virtual ~Person() = 0;
    virtual void Show() const;
};

class Gunslinger: virtual public Person {
private:
    int mark;
    double time;
public:
    Gunslinger(): Person(), mark(1), time(1) {}
    Gunslinger(const std::string & f, const std::string & l, int m, double t): Person(f, l), mark(m), time(t) {}
    void Show() const;
    double Draw() const;
};

class PokerPlayer: virtual public Person {
public:
    PokerPlayer(): Person() {}
    PokerPlayer(const std::string & f, const std::string & l): Person(f, l) {}
    int Draw() const;
};

class BadDude: public Gunslinger, PokerPlayer {
public:
    BadDude(): Person() {}
    BadDude(const std::string & f, const std::string & l, int m, double t): Gunslinger(f, l, m, t) {}
    int Cdraw() const;
    double Gdraw() const;
    void Show() const;
};

#endif