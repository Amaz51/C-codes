#include<iostream>
using namespace std;
int main() {


	int a = 1;
	while (a <= 5) {
		int b = 1;
		while (b <= 5 - a) {
			cout << " ";
			b++;
		}
		int c = 1;

		while (c <= a) {
			while (c != 1 && c != a) {
				cout << "  ";
				c++;
				
		   }
			cout << "# ";
			c++;
		}
		cout << endl;

		a++;
	}
	int d = 5;
	i = 1;
	while (i <= 5) {
		int b = 1;
		while (b <= a) {
			cout << " ";
			b++;
		}
		int c = d;
		while (c > 1) {
			while (c != 2 && c != d) {
				cout << "  ";
				c--;
			}		
			cout << "# ";
			c--;
		} d--;
		cout << endl;

		a++;
	}
}