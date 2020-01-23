#include <iostream>

using namespace std;

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(const box);
void calu(box *);

int main(int argc, char const *argv[]) {
    box b = {"wow", 4.0, 4.0, 4.0};
    calu(&b);
    show(b);
    return 0;
}

void show(box b) {
    cout << "maker: " << b.maker << endl;
    cout << "height: " << b.height << endl;
    cout << "width: " << b.width << endl;
    cout << "length: " << b.length << endl;
    cout << "volume: " << b.volume << endl;
}

void calu(box * b) {
    b->volume = b->height * b->width * b->length;
}
