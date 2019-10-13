#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int dis;
    int oil;


    cout << "请输入里程（英里）: ";
    cin >> dis;
    cout << "请输入油耗（加仑）: ";
    cin >> oil;
    cout << "1加仑可以走" << double(dis) / double (oil) << "里程";
    
    
    return 0;
}
