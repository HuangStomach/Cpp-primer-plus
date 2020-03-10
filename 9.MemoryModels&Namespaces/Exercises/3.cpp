#include <iostream>

struct chaff {
    char dross[20];
    int slag;
};

int main(int argc, char const *argv[]) {
    using std::cout;
    using std::endl;

    chaff * chaffs = new chaff[2];
    strcpy(chaffs[0].dross, "abc");
    chaffs[0].slag = 1;
    strcpy(chaffs[1].dross, "def");
    chaffs[1].slag = 2;

    for (int i = 0; i < 2; i++) {
        cout << chaffs[i].dross << " " << chaffs[i].slag << endl;
    }
    delete [] chaffs;

    return 0;
}
