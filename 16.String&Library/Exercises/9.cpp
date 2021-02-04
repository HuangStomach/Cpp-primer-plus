#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
int SIZE = 1000000;

int main(int argc, char const *argv[]) {
    clock_t start;
    clock_t end;

    vector<int> vi0(SIZE);
    vector<int> vi(SIZE);
    list<int> li(SIZE);
    for (int i = 0; i < SIZE; i++) {
        vi0[i] = rand() % SIZE;
        vi[i] = vi0[i];
        li.push_back(vi0[i]);
    }

    start = clock();
    sort(vi.begin(), vi.end());
    end = clock();
    cout << "vi sort time: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

    start = clock();
    li.sort();
    end = clock();
    cout << "li sort time: " << (double)(end - start) / CLOCKS_PER_SEC << endl;


    li.clear();
    for (int i = 0; i < SIZE; i++) {
        li.push_back(vi0[i]);
    }
    start = clock();
    for (int i = 0; i < SIZE; i++) {
        vi[i] = li.front();
        li.pop_front();
    }
    sort(vi.begin(), vi.end());
    for (int i = 0; i < SIZE; i++) {
        li.push_back(vi[i]);
    }
    end = clock();
    cout << "copy sort time: " << (double)(end - start) / CLOCKS_PER_SEC << endl;

    return 0;
}
