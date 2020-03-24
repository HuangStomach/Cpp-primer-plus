#include "1.account.h"

int main(int argc, char const *argv[]) {
    Account ac = Account("hjp", "5929", 100.0);
    ac.input(300.0);
    ac.ouput(200.0);
    ac.show();

    return 0;
}
