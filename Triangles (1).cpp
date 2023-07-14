//Pyramid
//#include<iostream>
//using namespace std;
//int main() {
//	int i, j, k, n;
//	cout << "Input Number of rows: ";
//	cin >> n;
//	for (i = 1; i <= n; i++) {
//		for (k = 1; k <= (n - i); k++) {
//			cout << "  ";
//		}
//		for (j = 0; j < i; j++) {
//			cout << " *  ";
//		}
//		cout << endl;
//	}
//}

//Right-Facing Right-Angled Triangle//
//#include<iostream>
//using namespace std;
//int main() {
//	int i, j, k, n;
//	cout << "Input Number of rows: ";
//	cin >> n;
//	for (i = 1; i <= n; i++) {
//		for (k = 1; k <= (n - i); k++) {
//			cout << "";
//		}
//		for (j = 0; j < i; j++) {
//			cout << "*  ";
//		}
//		cout << endl;
//	}
//}

//Left-Facing Right Angled-Triangle//
//#include<iostream>
//using namespace std;
//int main() {
//	int i, j, k, n;
//	cout << "Input Number of rows: ";
//	cin >> n;
//	for (i = 1; i <= n; i++) {
//		for (k = 1; k <= (n - i); k++) {
//			cout << "  ";
//		}
//		for (j = 0; j < i; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//}

//Right-Facing Pyramid
//#include<iostream>
//using namespace std;
//
//int main() {
//	int n, i, j, k, z;
//	cout << "Enter the Number of Rows to Peak: ";
//	cin >> n;
//	i = 1, k = 1, z = 1;
//	for (i = i; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			cout << " * ";
//		}cout << endl;
//	}
//	i = 1;
//	while (i <= n) {
//		j = 1;
//		while (j <= (n - i)) {
//			cout << " * ";
//			j++;
//		}cout << endl;
//		i++;
//	}
//}