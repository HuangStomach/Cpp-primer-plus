#include "2.person.h"

int main(int argc, char const *argv[]) {
    Person one = Person();
    one.Show();
    one.FormalShow();

    Person two = Person("Smythecraft");
    two.Show();
    two.FormalShow();

    Person three = Person("Dimwiddy", "Sam");
    three.Show();
    three.FormalShow();
    
    return 0;
}
