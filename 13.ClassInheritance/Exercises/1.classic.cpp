#include "1.classic.h"
#include "cstring"
#include "iostream"

using namespace std;

Cd::Cd(char * s1, char * s2, int n, double x) {
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d) {
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {
    strcpy(performers, "none");
    strcpy(label, "none");
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() {

}

void Cd::Report() const {
    cout << performers << endl;
    cout << label << endl;
    cout << selections << endl;
    cout << playtime << endl;
}

Cd & Cd::operator=(const Cd & d) {
    if (this == &d) return *this;
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(char * s1, char * s2, char * s3, int n, double x): Cd(s1, s2, n, x) {
    strcpy(major, "s3");
}

Classic::Classic(const Classic & d): Cd(d) {
    strcpy(major, d.major);
}

Classic::Classic(): Cd() {
    strcpy(major, "none");
}

Classic::~Classic() {

}

void Classic::Report() const {
    Cd::Report();
    cout << major << endl;
}

Classic & Classic::operator=(const Classic & d) {
    if (this == &d) return *this;
    Cd::operator=(d);
    strcpy(major, d.major);
    return *this;
}