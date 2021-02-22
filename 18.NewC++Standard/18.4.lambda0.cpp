#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>

const long Size1 = 39L;
const long Size2 = 100 * Size1;
const long Size3 = 100 * Size2;
bool f3(int x) { return x % 3 == 0; }
bool f13(int x) { return x % 13 == 0; }

int main(int argc, char const *argv[]) {
    using namespace std;
    vector<int> numbers(Size1);

    srand(time(0));
    generate(numbers.begin(), numbers.end(), rand);
    cout << Size1 << endl;

    int count3 = count_if(numbers.begin(), numbers.end(), f3);
    cout << count3 << endl;
    int count13 = count_if(numbers.begin(), numbers.end(), f13);
    cout << count13 << endl;

    numbers.resize(Size2);
    generate(numbers.begin(), numbers.end(), rand);
    cout << Size2 << endl;

    class f_mod {
    private:
        int dv;
    public:
        f_mod(int d = 1): dv(d) {}
        bool operator()(int x) { return x % dv == 0; }
    };

    count3 = count_if(numbers.begin(), numbers.end(), f_mod(3));
    cout << count3 << endl;
    count13 = count_if(numbers.begin(), numbers.end(), f_mod(13));
    cout << count13 << endl;

    numbers.resize(Size3);
    generate(numbers.begin(), numbers.end(), rand);
    cout << Size3 << endl;

    count3 = count_if(numbers.begin(), numbers.end(), [](int x){  return x % 3 == 0; });
    cout << count3 << endl;
    count13 = count_if(numbers.begin(), numbers.end(), [](int x){  return x % 13 == 0; });
    cout << count13 << endl;

    return 0;
}
