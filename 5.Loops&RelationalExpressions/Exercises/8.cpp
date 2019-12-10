#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[]) {
	char ch[20];
	char t[] = "done";
	int res = 0;

	cout << "Enter words" << endl;
	cin >> ch;
	while (strcmp(ch, t)) {
		res++;
		cin >> ch;
        cin.get();
	}

    cout << "total: " << res << endl;

    return 0;
}
