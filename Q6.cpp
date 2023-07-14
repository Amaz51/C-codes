#include<iostream>
using namespace std;
int main() {
	
	int i = 1;
	while ( i <= 9) {
		int j = 1;
		while ( j <= i ) {
			cout << " ";
			j++;
		}
		int k = 1;
		while ( k <= 9-i+1) {
			
			cout << k << " "; 
			k++;
		}
		int l = 2;
		while ( l <= i) {
			cout << " ";
			l++;
		}
		j = 2;
		while ( j <= i) {
			cout << " ";
			j++;
		}
		 k = 1;
		while( k <= 9 - i+1) {

			cout << k << " "; 
			k++;
		}
		cout << endl;
		i += 2;
	}
	


}