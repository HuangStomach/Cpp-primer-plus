#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    const double mile = 62.14;//100公里=62.14英里
    const double gallen = 3.875;//1加仑=3.875升
 
    double liter, us;
    cout << "请输入油耗：";
    cin >> liter;
    
    double gal = liter / gallen;
    us = mile / gal;

    cout << "油耗为："<< us;
    
    
    return 0;
}
