#include<iostream>
using namespace std;

	void check_palindrom(int a) {
         int rev = 0;
		while (a != 0) {
			int b = a % 10;
			
			rev = (rev * 10) + b;
			a = a / 10;
		}
		if (a == rev) {
			cout << a << " is palindrome.";
		}
	}
	int main() {
		int num;
		cout << "Enter the number : ";
		cin >> num;
		check_palindrom(num);
	}
