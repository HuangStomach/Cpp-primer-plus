#include <iostream>
#include "2.classic.h"
using namespace std;

void Bravo(const Cd & disk);

int main(int argc, char const *argv[]) {
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonta in B flat, Fantasia in C", "AB", "P", 2, 57.17);
    Cd *pcd = &c1;

    c1.Report();
    c2.Report();

    pcd->Report();
    pcd = &c2;
    pcd->Report();

    Bravo(c1);
    Bravo(c2);

    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd & disk) {
    disk.Report();
}