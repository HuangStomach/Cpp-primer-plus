#include "3.golf.h"

int main(int argc, char const *argv[]) {
    Golf ann = Golf("Ann", 24);
    ann.show();

    Golf andy = Golf();
    andy.setHandicap(20);
    andy.show();
    return 0;
}
