#include <iostream>
#include <stdexcept>

using namespace std;

class basic_bad: public logic_error {
protected:
    double v1;
    double v2;
public:
    basic_bad(double a, double b);
};

class bad_hmean: public basic_bad {
public:
    bad_hmean(double a, double b);
    void mesg();
};

class bad_gmean: public basic_bad {
public:
    bad_gmean(double a, double b);
    void mesg();
};
