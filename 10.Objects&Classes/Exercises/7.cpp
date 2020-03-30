#include "7.plorg.h"

int main(int argc, char const *argv[]) {
    Plorg a = Plorg();
    Plorg b = Plorg("Another", 30);
    a.setCi(40);

    a.show();
    b.show();
    return 0;
}
