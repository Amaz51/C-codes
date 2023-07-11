//#include<iostream>
//using namespace std;
//void swap(int arr[],int s) {
//	for (int i = 0; i < s; i++) {
//		int temp = 0;
//		for (int j = i + 1; j < s; j++) {
//			if (arr[j] < arr[i]) {
//				temp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = temp;
//			}
//		}
//	}
//}
//void printarr(int arr[],int size) {
//	for (int i = 0; i < size; i++) {
//		cout << *(arr + i) << " ";
//
//	}
//}
//int main() {
//	int size;
//	cout << "Enter the size of array : ";
//	cin >> size;
//
//	int *arr = new int[size];
//	cout << "Enter the array elements : ";
//	for (int i = 0; i < size; ) {
//		cin >> *(arr+i);
//		if (arr[i] == 0 || arr[i] == 1) {
//			i++;
//		}
//		else {
//			cout << "Please enter 0 or 1.";
//		}
//	}
//	swap(arr, size);
//	printarr(arr,size);
// delete[] arr;
//}