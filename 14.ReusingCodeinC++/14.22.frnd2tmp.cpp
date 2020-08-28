#include <iostream>
using namespace std;

template <typename T>
class HasFriend {
private:
    T item;
    static int ct;
public:
    HasFriend(const T & i): item(i) {ct++;}
    ~HasFriend() {ct--;}
    friend void counts();
    friend void reports(HasFriend<T> &);
};

template<typename T>
int HasFriend<T>::ct = 0;

void counts() {
    cout << "int: " << HasFriend<int>::ct << "; ";
    cout << "double: " << HasFriend<double>::ct << "; ";
}

void reports(HasFriend<int> & hf) {
    cout << hf.item << endl;
}

void reports(HasFriend<double> & hf) {
    cout << hf.item << endl;
}

int main(int argc, char const *argv[]) {
    counts();
    HasFriend<int> hfi1(10);
    counts();
    HasFriend<int> hfi2(20);
    counts();

    HasFriend<double> hfdb(10.5);
    counts();
    reports(hfi1);
    reports(hfi2);
    reports(hfdb);
    return 0;
}

