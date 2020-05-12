#include "1.cow.h"

int main(int argc, char const *argv[]) {
    Cow a = Cow("jams", "usa", 22.00);
    Cow b = a;

    a.ShowCow();
    b.ShowCow();
    return 0;
}
