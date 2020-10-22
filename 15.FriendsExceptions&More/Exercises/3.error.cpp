#include "3.error.h"

basic_bad::basic_bad(double a, double b): logic_error("error") {
    v1 = a;
    v2 = b;
}

bad_hmean::bad_hmean(double a, double b): basic_bad(a, b) {

}

void bad_hmean::mesg() {
    cout << "method name 'mesg' v1: " << v1 << "v2: " << v2 << endl;
}

bad_gmean::bad_gmean(double a, double b): basic_bad(a, b) {
    
}

void bad_gmean::mesg() {
    cout << "method name 'mesg' v1: " << v1 << "v2: " << v2 << endl;
}