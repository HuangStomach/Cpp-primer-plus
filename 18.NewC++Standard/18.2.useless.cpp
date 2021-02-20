#include <iostream>

using namespace std;

class Useless {
private:
    int n;
    char * pc;
    static int ct;
    void ShowObject() const;
public:
    Useless();
    explicit Useless(int k);
    Useless(int k, char ch);
    Useless(const Useless & f);
    Useless(Useless && f);
    ~Useless();
    Useless operator+(const Useless & f) const;
    void ShowData() const;
};

int Useless::ct = 0;

Useless::Useless() {
    ++ct;
    n = 0;
    pc = nullptr;
    cout << "default, number: " << ct << endl;
    ShowObject();
}

Useless::Useless(int k) :n(k) {
    ++ct;
    pc = new char[n];
    cout << "int call, number: " << ct << endl;
    ShowObject();
}

Useless::Useless(int k, char ch) :n(k) {
    ++ct;
    pc = new char[n];
    cout << "int char call, number: " << ct << endl;
    for (int i = 0; i < n; i++) {
        pc[i] = ch;
    }
    ShowObject();
}

Useless::Useless(const Useless & f) :n(f.n) {
    ++ct;
    pc = new char[f.n];
    cout << "copy call, number: " << ct << endl;
    for (int i = 0; i < n; i++) {
        pc[i] = f.pc[i];
    }
    ShowObject();
}

Useless::Useless(Useless && f) :n(f.n) {
    ++ct;
    pc = f.pc;
    cout << "move call, number: " << ct << endl;
    f.pc = nullptr;
    f.n = 0;
    ShowObject();
}

Useless::~Useless() {
    cout << "destructor." << endl;
    ShowObject();
    delete []pc;
}

Useless Useless::operator+(const Useless & f) const {
    cout << "operator+()" << endl;
    Useless temp = Useless(n + f.n);
    for (int i = 0; i < n; i++) {
        temp.pc[i] = pc[i];
    }
    for (int i = n; i < temp.n; i++) {
        temp.pc[i] = f.pc[i - n];
    }
    cout << "temp:.\n";
    cout << "Leaving+\n";
    return temp;
}

void Useless::ShowObject() const {
    cout << "number: " << n;
    cout << " Data address " << (void *)pc << endl;
}

void Useless::ShowData() const {
    if (n == 0) cout << "(empty)";
    else for (int i = 0; i < n; i++) {
        cout << pc[i];
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    Useless one(10, 'x');
    Useless two = one;
    Useless three(20, 'c');
    Useless four(one + three);
    one.ShowData();
    two.ShowData();
    three.ShowData();
    four.ShowData();
    return 0;
}

