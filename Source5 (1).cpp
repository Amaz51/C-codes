#include<iostream>
using namespace std;
int main() {
	int x;
	cout << "Enter year: ";
	cin >> x;
	if (x % 4 == 0) {
		if (x % 100 == 0) {
			if (x % 400 == 0) {
				cout << "It is a leap year." << endl;
			}
			else cout<< "It is not a leap year." << endl;
		} else cout << "It is a leap year." << endl;
	} else cout << "It is not a leap year." << endl;
	return 0;
}