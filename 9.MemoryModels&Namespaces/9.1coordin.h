#ifndef CORRDIN_H_
#define CORRDIN_H_

struct polar {
    double distance;
    double angle;
};

struct rect {
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif;
