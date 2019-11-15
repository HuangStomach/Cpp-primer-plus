#include <iostream>
#include <vector>
#include <array>

int main(int argc, char const *argv[]) {
    using namespace std;

    array<double, 3> score;
    double total;

    for (int i = 1; i < 4; i++) {
        cout << "请输入第" << i << "次40米跑的成绩";
        cin >> score[i - 1];
        total += score[i - 1];
    }

    cout << "平均成绩是" << total / 3 << endl;

    return 0;
}
