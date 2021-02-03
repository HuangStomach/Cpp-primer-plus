#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

vector<int> Lotto(int, int);

int main(int argc, char const *argv[]) {
    vector<int> a = Lotto(51, 6);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}

vector<int> Lotto(int max, int num) {
    vector<int> numbers, result;
    for (int i = 1; i <= max; i++) {
        numbers.push_back(i);
    }
    shuffle(numbers.begin(), numbers.end(), default_random_engine(0));
    
    for (int i = 0; i < num; i++) {
        result.push_back(numbers[i]);
    }
    return result;
}
