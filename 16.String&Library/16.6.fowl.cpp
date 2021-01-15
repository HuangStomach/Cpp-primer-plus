#include <iostream>
#include <string>
#include <memory>

int main(int argc, char const *argv[]) {
    using namespace std;
    auto_ptr<string> films[5] = {
        auto_ptr<string> (new string("Fowl Balls")),
        auto_ptr<string> (new string("Duck Walk")),
        auto_ptr<string> (new string("Chicken Runs")),
        auto_ptr<string> (new string("Turkey Errors")),
        auto_ptr<string> (new string("Goose Eggs"))
    };
    auto_ptr<string> pwin;
    pwin = films[2];

    cout << "The nominees for best avian baseball film are\n";
    for (int i = 0; i < 5; i++) {
        cout << *films[i] << endl;
    }
    cout << "The winner is " << *pwin << "!\n";
    cin.get();

    return 0;
}
