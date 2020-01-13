#include <iostream>
#include <cmath>

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

void rect_to_polar(const rect * xypos, polar * pda);
void show_polar(const polar * pda);

int main(int argc, char const *argv[]) {
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter x and y: ";
    while (cin >> rplace.x >> rplace.y) {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    
    cout << "Done.";
    return 0;
}

void rect_to_polar(const rect * xypos, polar * pda) {
    using namespace std;
    polar answer;

    pda->distance = sqrt(xypos->x * xypos->x + xypos->y * xypos->y);
    pda->angle = atan2(xypos->y, xypos->x);
}

void show_polar(const polar * pda) {
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << " degrees\n";
}
