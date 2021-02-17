#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char const *argv[]) {
    using namespace std;
    ostringstream outstr;
    string hdisk;
    cout << "What's name? ";
    getline(cin, hdisk);
    int cap;
    cout << "What's its capacity in GB? ";
    cin >> cap;
    outstr << "The hard disk " << hdisk << " has a capacity of " << cap << " gigabytes.\n";
    string result = outstr.str();
    cout << result;

    return 0;
}
