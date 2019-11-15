#include <iostream>
#include <string>

using namespace std;

struct Pizza {
    string ent;
    double d;
    double weight;
};

int main(int argc, char const *argv[]) {
    Pizza * pizza = new Pizza;
    cout << "请输入披萨直径：";
    cin >> pizza->d;
    cout << "请输入披萨公司名称：";
    getline(cin, pizza->ent);
    cout << "请输入披萨重量：";
    cin >> pizza->weight;
    

    cout << "公司名称: " << pizza->ent << endl;
    cout << "直径: " << pizza->d << endl;
    cout << "重量: " << pizza->weight << endl;

    delete pizza;
    return 0;
}
