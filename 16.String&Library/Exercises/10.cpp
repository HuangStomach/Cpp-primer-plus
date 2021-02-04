#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Review {
    string title;
    int rating;
    double price;
};
bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool FillReview(Review & rr);
void ShowReview(const shared_ptr<Review> & rr);

int main(int argc, char const *argv[]) {
    vector<shared_ptr<Review>> books;
    Review temp;
    shared_ptr<Review> review(new Review(temp));
    while (FillReview(temp)) books.push_back(review);

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

bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2) {
    if (r1->title < r2->title) return true;
    else if (r1->title == r2->title && r1->rating < r2->rating) return true;
    else if (r1->title == r2->title && r1->rating == r2->rating && r1->price < r2->price) return true;
    else return false;
}

bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2) {
    if (r1->title < r2->title) return true;
    else if (r1->title == r2->title && r1->rating < r2->rating) return true;
    else if (r1->title == r2->title && r1->rating == r2->rating && r1->price < r2->price) return true;
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

    cout << "Enter book price: ";
    cin >> rr.price;
    if (!cin) return false;
    while (cin.get() != '\n') continue;
    
    return true;
}

void ShowReview(const shared_ptr<Review> & rr) {
    cout << rr->rating << "\t" << rr->title << "\t" << rr->price << endl;
}

