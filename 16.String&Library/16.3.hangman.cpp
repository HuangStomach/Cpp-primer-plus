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

    cin >> play;
    play = tolower(play);
    while (play == 'y') {
        string target = wordlist[std::rand() % NUM];
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        
        while (guesses > 0 && attempt != target) {
            char letter;
            cout << "Guess: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos 
            || attempt.find(letter) != string::npos) {
                cout << "try again.\n";
                continue;
            }
            int loc = target.find(letter);
            if (loc == string::npos) {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter;
            }
            else {
                cout << "Good!\n";
                attempt[loc] = letter;
                loc = target.find(letter, loc + 1);
                while (loc != string::npos) {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
                
            }
            cout << "your word: " << attempt << endl;
            if (attempt != target) {
                if (badchars.length() > 0) cout << "Bad choices:" << endl;
            }
        }

        if (guesses > 0) cout << "right!\n";
        else cout << "Sorry, the word is " << target << ".\n";
        
        cout << "another?<y/n>";
        cin >> play;
        play = tolower(play);
    }
    

    return 0;
}
