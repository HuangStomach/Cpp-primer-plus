#include <iostream>

class bad_hmean {
private:
    double v1;
    double v2;
public:
    bad_hmean(double a = 0, double b = 0): v1(a), v2(b) {}
    void mesg();
};

inline void bad_hmean::mesg() {
    std::cout << "invalid args\n";
}

class bad_gmean {
private:
    double v1;
    double v2;
public:
    bad_gmean(double a = 0, double b = 0): v1(a), v2(b) {}
    const char * mesg();
};

inline const char * bad_gmean::mesg() {
    return "gmean() args\n";
}
