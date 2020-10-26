#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;
const int NUM = 26;
const string wordlist[NUM] = {
    "apiary", "beetle", "cereal", "danger", "ensign", "florid",
    "garage", "health", "insult", "jackal", "keeper", "loaner",
    "manage", "nonce", "onset", "plaid", "quilt", "remote", "stolid",
    "train", "useful", "valid", "whence", "xenon", "yearn", "zippy"
};

int main(int argc, char const *argv[]) {
    srand(time(0));
    char play;
    cout << "will you play a word game? <y/n> ";
    return 0;
}
