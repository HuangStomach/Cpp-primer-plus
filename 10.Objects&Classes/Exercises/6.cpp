#include "6.move.h"

int main(int argc, char const *argv[]) {
    Move a = Move(10, 20);
    Move b = Move(20, 30);
    a.showmove();
    a.reset(30, 40);
    a.showmove();
    a.add(b).showmove();
    return 0;
}
