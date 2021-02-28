#include <iostream>
#include <string>

using namespace std;

class Cpmv {
public:
    struct Info {
        string qcode;
        string zcode;
    };
private:
    Info *pi;
public:
    Cpmv();
    Cpmv(string q, string z);
    Cpmv(const Cpmv & cp);
    Cpmv(Cpmv && cp);
    ~Cpmv();
    Cpmv & operator=(const Cpmv & cp);
    Cpmv & operator=(Cpmv && mv);
    Cpmv operator+(const Cpmv & obj) const;
    void Display() const;
};

Cpmv::Cpmv() {
    pi = new Info;
    pi->qcode = "";
    pi->zcode = "";
}

Cpmv::Cpmv(string q, string z) {
    pi = new Info;
    pi->qcode.assign(q);
    pi->zcode.assign(z);
}

Cpmv::Cpmv(const Cpmv & cp) {
    pi = new Info;
    pi->qcode.assign(cp.pi->qcode.c_str());
    pi->zcode.assign(cp.pi->zcode.c_str());
}

Cpmv::Cpmv(Cpmv && cp) {
    pi = new Info;
    pi->qcode.assign(cp.pi->qcode.c_str());
    pi->zcode.assign(cp.pi->zcode.c_str());
    cp.pi = nullptr;
}

Cpmv::~Cpmv() {
    pi = nullptr;
}

Cpmv & Cpmv::operator=(const Cpmv & cp) {
    if (this == &cp) return *this;
    pi->qcode.assign(cp.pi->qcode.c_str());
    pi->zcode.assign(cp.pi->zcode.c_str());

    return *this;
}

Cpmv & Cpmv::operator=(Cpmv && mv) {
    if (this == &mv) return *this;
    pi->qcode.assign(mv.pi->qcode.c_str());
    pi->zcode.assign(mv.pi->zcode.c_str());
    mv.pi = nullptr;

    return *this;
}

Cpmv Cpmv::operator+(const Cpmv & obj) const {
    Cpmv temp = Cpmv(pi->qcode, pi->zcode);
    temp.pi->qcode.append(obj.pi->qcode.c_str());
    temp.pi->zcode.append(obj.pi->zcode.c_str());

    return temp;

}

void Cpmv::Display() const {
    cout << "Info:.\n";
    cout << "qcode: " << pi->qcode << "\nzcode: " << pi->zcode << endl;
}

int main(int argc, char const *argv[]) {
    Cpmv cp1 = Cpmv();
    Cpmv cp2 = Cpmv("left", "right");
    Cpmv cp3 = Cpmv(", after", ", behind");

    cout << "origin.\n";
    cp1.Display();
    cp2.Display();
    cp3.Display();

    cout << "new .\n";
    cp1 = Cpmv(cp2);
    cp1.Display();
    cp1 = Cpmv(cp2 + cp3);
    cp1.Display();

    cout << "=.\n";
    cp1 = cp3;
    cp1.Display();
    cp1 = cp2 + cp3;
    cp1.Display();
    cp2.Display();
    cp3.Display();

    return 0;
}
