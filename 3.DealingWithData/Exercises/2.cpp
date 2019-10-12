#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int a; // 英尺
    int b; // 英寸
    int c; // 体重
    const int unita = 12;
    const double unitb = 0.0254;
    const double unitc = 2.2;


    cout << "请输入身高英尺: ___\b\b\b";
    cin >> a;
    cout << "请输入身高英寸: ___\b\b\b";
    cin >> b;
    cout << "请输入体重磅数: ___\b\b\b";
    cin >> c;

    double height = (a * unita + b) * unitb;
    double weight = c / unitc;

    cout << "Your BMI is " << weight / (height * height) << endl;
    
    return 0;
}
