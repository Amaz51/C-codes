#include<iostream>
using namespace std;
int main() {

	
	int a = 1;
	while (a <= 5) {
		int b = 1;
		while (b <= 5- a) {
			cout << " ";
			b++;
		}
		int c = 1;

		while (c <= a) {
			cout << "* ";
			c++;
		}
		cout << endl;

		a++;
	}
	int s = 5;
	a = 1;
	while (a <= 5) {
		int b = 1;
		while (b <= a) {
			cout << " ";
			b++;
		}
		int c = s;
		while (c > 1) {
			cout << "* ";
			c--;
		} s--;
		cout << endl;

		a++;
	}
}