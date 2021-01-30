#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    vector<string> wordlist;
    ifstream fin;
    fin.open("3.txt");
    if (fin.is_open() == false) {
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
    }
    string item;
    fin >> item;
    wordlist.push_back(item);
    while (fin.good()) {
        fin >> item;
        cout << item << endl;
        wordlist.push_back(item);
    }
    fin.close();

    char play;
    cout << "will you play a word game? <y/n> ";

    cin >> play;
    play = tolower(play);
    while (play == 'y' && wordlist.size() > 0) {
        string target = wordlist.back();
        wordlist.pop_back();

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
