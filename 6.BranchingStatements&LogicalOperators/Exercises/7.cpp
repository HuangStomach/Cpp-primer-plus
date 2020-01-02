#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[]) {
    cout << "Enter words (q to quit): ";

    string word;
    int other = 0, vowel = 0, consonant = 0;
    cin >> word;

    while (word != "q") {
        if (isalpha(word[0])) {
            // 判断元音或辅音
            switch(word[0]) {
                case 'a':
                case 'A':
                case 'e':
                case 'E':
                case 'i':
                case 'I':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                    vowel++;
                    break;
                default:
                    consonant++;
            }
        }
        else other++;
        cin >> word;
    }

    cout << vowel << " words beginning with vowels" << endl;
    cout << consonant << " words beginning with consonants" << endl;
    cout << other << " others" << endl;

    return 0;
}
