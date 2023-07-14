#include<iostream>
using namespace std;
int main() {
	int a = 1;
	while (a <= 4) {
		if (a % 2 != 0) {
			int b = 1;
			while (b <= 11) {
				cout << "- ";
				b++;
			} cout << endl;
		}
		if (a % 2 == 0) {
			int b = 1;
			while (b <= 11) {
				cout << " -";
				b++;
			} cout << endl;
		}
		a++;
	}
}
	