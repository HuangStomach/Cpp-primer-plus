#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <functional>

void outint(int n) {std::cout << n << " ";}

int main(int argc, char const *argv[]) {
    using std::list;
    using std::cout;
    using std::endl;
    using std::function;

    function<void(int)> outint = [](int n) { std::cout << n << " "; };
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    list<int> yadayada(vals, vals + 10);
    list<int> etcetera(vals, vals + 10);

    cout << "Original lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;

    yadayada.remove_if([](double v) { return v > 100; });
    etcetera.remove_if([](double v) { return v > 200; });
    cout << "Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), outint);
    cout << endl;
    for_each(etcetera.begin(), etcetera.end(), outint);
    cout << endl;

    return 0;
}
