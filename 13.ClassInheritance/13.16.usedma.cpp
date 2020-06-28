#include <iostream>
#include "13.14.dma.h"

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA ballon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buggalp Keys", 5);
    cout << shirt << endl;
    cout << ballon << endl;
    cout << map << endl;
    lacksDMA ballon2(ballon);
    cout << ballon2 << endl;

    hasDMA map2;
    map2 = map;
    cout << map << endl;
    return 0;
}
