#include <iostream>
#include <stdexcept>

using namespace std;

class bad_hmean: public logic_error {
public:
    void mesg();
};

inline void bad_hmean::mesg() {
    std::cout << "invalid args\n";
}

class bad_gmean: public logic_error {
public:
    const char * mesg();
};

inline const char * bad_gmean::mesg() {
    return "gmean() args\n";
}
