#include <iostream>
#include <string>
#include <map>
#include <algorithm>

typedef int KeyType;
typedef std::pair<const KeyType, std::string> Pair;
typedef std::multimap<KeyType, std::string> MapCode;

int main(int argc, char const *argv[]) {
    using namespace std;
    MapCode codes;

    codes.insert(Pair(415, "San Francisco"));
    codes.insert(Pair(510, "Oakland"));
    codes.insert(Pair(718, "Brooklyn"));
    codes.insert(Pair(718, "Staten Island"));
    codes.insert(Pair(415, "San Rafael"));
    codes.insert(Pair(510, "Berkeley"));

    cout << codes.count(415) << endl;
    cout << codes.count(718) << endl;
    cout << codes.count(510) << endl;

    MapCode::iterator it;
    for (it = codes.begin(); it != codes.end(); ++it) {
        cout << "   " << (*it).first << "   " << (*it).second << endl;
    }
    pair<MapCode::iterator, MapCode::iterator> range = codes.equal_range(718);
    cout << "Cities with area code 718:\n";
    for (it = range.first; it != range.second; ++it) {
        cout << (*it).second << endl;
    }

    return 0;
}
