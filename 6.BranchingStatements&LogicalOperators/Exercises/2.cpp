#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[]) {
    int count = 0;
    double donation[10];
    char c;

    cout << "请输入数字";
    cin >> c;

    while (isnumber(c)) {
        while (cin.get() != '\n') continue;
        donation[count++] = double(c);
        cout << "请输入数字";
        cin >> c;
    }

    double sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += donation[i];
    }
    
    cout << "共有" << count << endl;
    cout << "平均值" << sum / (count - 1) << endl;
    return 0;
}
