#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
const long Size = 390000L;

int main(int argc, char const *argv[]) {
    using namespace std;
    vector<int> numbers(Size);

    srand(time(0));
    generate(numbers.begin(), numbers.end(), rand);
    cout << "Size: " << Size << endl;

    int count3 = count_if(numbers.begin(), numbers.end(), [](int x) { return x % 3 == 0; });
    cout << "count 3 " << count3 << endl;

    int count13 = 0;
    for_each(numbers.begin(), numbers.end(), [&count13](int x) { return count13 += x % 13 == 0; });
    cout << "count 13 " << count13 << endl;

    count3 = count13 = 0;
    for_each(numbers.begin(), numbers.end(), [&](int x) { count3 += x % 13 == 0; count13 += x % 13 == 0; });
    cout << "count 3 " << count3 << endl;
    cout << "count 13 " << count13 << endl;

    return 0;
}

