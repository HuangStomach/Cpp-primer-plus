#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    string months[12] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"};
    int vals[3][12];
    int res[3] = {0, 0, 0};
    int total = 0;
    
    for (int j = 0; j < 3; ++j) {
        for (int i = 0; i < 12; ++i) {
            cout << "第" << j + 1 << "年" << months[i] <<  "月销售额: ";
            cin >> vals[j][i];
            res[j] += vals[j][i];
        }
        cout << "第" << j + 1 << "年总销售额: " << total << endl;
        total += res[j];
    }
    
    cout << "总销售额: " << total << endl;
    return 0;
}
