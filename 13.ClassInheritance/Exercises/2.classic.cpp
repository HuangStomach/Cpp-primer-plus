#include "2.classic.h"
#include "cstring"
#include "iostream"

using namespace std;

Cd::Cd(const char * s1, const char * s2, int n, double x) {
    performers = new char[strlen(s1) + 1];
    strcpy(performers, s1);
    label = new char[strlen(s2) + 1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d) {
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd() {
    performers = new char[5];
    strcpy(performers, "none");
    label = new char[5];
    strcpy(label, "none");
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd() {
    delete []performers;
    delete []label;
}

void Cd::Report() const {
    cout << performers << endl;
    cout << label << endl;
    cout << selections << endl;
    cout << playtime << endl;
}

Cd & Cd::operator=(const Cd & d) {
    if (this == &d) return *this;
    delete []performers;
    delete []label;
    
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char * s1, const char * s2, const char * s3, int n, double x): Cd(s1, s2, n, x) {
    major = new char[strlen(s3) + 1];
    strcpy(major, s3);
}

Classic::Classic(const Classic & d): Cd(d) {
    major = new char[strlen(d.major) + 1];
    strcpy(major, d.major);
}

Classic::Classic(): Cd() {
    major = new char[5];
    strcpy(major, "none");
}

Classic::~Classic() {
    delete []major;
}

void Classic::Report() const {
    Cd::Report();
    cout << major << endl;
}

Classic & Classic::operator=(const Classic & d) {
    if (this == &d) return *this;
    Cd::operator=(d);
    delete []major;
    major = new char[strlen(d.major) + 1];
    strcpy(major, d.major);
    return *this;
}