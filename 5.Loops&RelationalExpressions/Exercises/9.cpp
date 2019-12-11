#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
	string str;
	string done = "done";
	int res = 0;

	cout << "Enter words" << endl;
	cin >> str;
	while (str != done) {
		res++;
		cin >> str;
        cin.get();
	}

    cout << "total: " << res << endl;

    return 0;
}
