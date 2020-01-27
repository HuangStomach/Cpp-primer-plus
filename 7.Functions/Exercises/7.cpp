#include<iostream>

const int Max = 5;
double * fill_array(double * ar, int limit);
void show_array(const double * ar, double * end);
void revalue(double r, double * ar, double * end);

int main(void) {
	using namespace std; 		
	double properties[Max];
	double * end = fill_array(properties, Max);
	show_array(properties, end);
	cout << "Enter revaluation factor: ";
	double factor;
	cin >> factor;
	revalue(factor, properties, end);
	show_array(properties, end);
	cout << "Done.\n";
	return 0;
}
	
double * fill_array(double * ar, int limit) {
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++) {
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin) {
			cin.clear();
			while (cin.get() != '\n') continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if (temp < 0) break;
		*(ar + i) = temp;
	}
	return (ar + i);
}

void show_array(const double * ar, double * end) {
	using namespace std;
	const double * temp = ar;
	for (int i = 0; temp < end; i++, temp++) {
		cout << "Property #" << (i + 1) << ": $";
		cout << *temp << endl;
	}
}

void revalue(double r, double * ar, double * end) {
	double * temp = ar;
	for (int i = 0; temp < end; i++, temp++) *temp *= r;
}