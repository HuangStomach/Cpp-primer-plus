#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    string months[12] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
    int vals[12];
    int res = 0;
    
    for (int i = 0; i < 12; ++i) {
        cout << months[i] <<  "月销售额: ";
        cin >> vals[i];
        res += vals[i];
    }
    
    cout << "总销售额: " << res << endl;
    return 0;
}
