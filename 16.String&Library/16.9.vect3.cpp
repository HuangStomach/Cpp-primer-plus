#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Review {
    string title;
    int rating;
};
bool operator<(const Review & r1, const Review & r2);
bool worseThan(const Review & r1, const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const Review & rr);

int main(int argc, char const *argv[]) {
    vector<Review> books;
    Review temp;
    while (FillReview(temp)) books.push_back(temp);

    if (books.size() > 0) {
        cout << "Enter:\n";
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end());
        for_each(books.begin(), books.end(), ShowReview);

        sort(books.begin(), books.end(), worseThan);
        for_each(books.begin(), books.end(), ShowReview);

        shuffle(books.begin(), books.end(), random());
        for_each(books.begin(), books.end(), ShowReview);
    }
    else cout << "Nothing.\n";
    
    return 0;
}

bool operator<(const Review & r1, const Review & r2) {
    if (r1.title < r2.title) return true;
    else if (r1.title == r2.title && r1.rating < r2.rating) return true;
    else return false;
}

bool worseThan(const Review & r1, const Review & r2) {
    if (r1.rating < r2.rating) return true;
    else return false;
}

bool FillReview(Review & rr) {
    cout << "Enter title (quit to quit): ";
    getline(cin, rr.title);
    if (rr.title == "quit") return false;

    cout << "Enter book rating: ";
    cin >> rr.rating;
    if (!cin) return false;
    while (cin.get() != '\n') continue;
    
    return true;
}

void ShowReview(const Review & rr) {
    cout << rr.rating << "\t" << rr.title << endl;
}

