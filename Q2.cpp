#include<iostream>
using namespace std;
int main() {
	int i = 1;
	while (i <= 5) {
		int j = 1;
		while (j <= i) {
			cout << " ";
			j++;
		}
		int k = 5;
		while (k >= i) {
			cout << "* ";
			k--;
		}
		cout << endl;
		i++;
	}
	while (i < 10) {
		int j = 10 ;
		while (j >i) {
			cout << " ";
			j--;
		}
		int k = 5;
		while (k <= i) {
			cout << "* ";
			k++;
		}
		cout << endl;
		i++;
	}
}