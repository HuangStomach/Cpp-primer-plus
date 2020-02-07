#include <iostream>
#include <string>

using namespace std;

struct free_throws {
    string name;
    int made;
    int attempts;
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target, const free_throws & source);

int main(int argc, char const *argv[]) {
    free_throws one = {"IB", 13, 14};
    free_throws two = {"AK", 10, 16};
    free_throws three = {"MM", 7, 9};
    free_throws four = {"WL", 5, 9};
    free_throws five = {"LL", 6, 14};
    free_throws team = {"T", 0, 0};

    free_throws dup;
    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);

    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);

    dup = accumulate(team, five);
    cout << "Display team: " << endl;
    display(team);
    cout << "Display dup after assignment: " << endl;
    display(dup);
    set_pc(four);

    accumulate(dup, five) = four;
    cout << "Displaying dup after ill-advised assignment: " << endl;
    display(dup);

    return 0;
}

void display(const free_throws & ft) {
    cout << "Name: " << ft.name << endl;
}

void set_pc(free_throws & ft) {
    ft.percent = ft.attempts != 0 ? 100.0f * float(ft.made) / float(ft.attempts) : 0;
}

free_throws & accumulate(free_throws & target, const free_throws & source) {
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);

    return target;
}
