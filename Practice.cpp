//#include <iostream>
//using namespace std;
//
//void Input(int*& iarr, int& size) {
//    int input, i = 0;
//    cout << "Enter integers (-1 to stop): ";
//    cin >> input;
//    while (input != -1) {
//        if (i == size) {
//            int* temp = new int[size * 2];
//            for (int j = 0; j < size; j++) {
//                temp[j] = iarr[j];
//            }
//            delete[] iarr;
//            iarr = temp;
//            size *= 2;
//        }
//        iarr[i++] = input;
//        cout << "Enter another integer (-1 to stop): ";
//        cin >> input;
//    }
//}
//
//void reverse(int* iarr, int size) {
//    for (int i = 0; i < size / 2; i++) {
//        int temp = iarr[i];
//        iarr[i] = iarr[size - i - 1];
//        iarr[size - i - 1] = temp;
//    }
//}
//
//void Output(int* iarr, int size) {
//    cout << "Reversed integers: ";
//    for (int i = 0; i < size; i++) {
//        cout << iarr[i] << " ";
//    }
//    cout << endl;
//}
//
//int main() {
//    int size = 5;
//    int* iarr = new int[size];
//    Input(iarr, size);
//    reverse(iarr, size);
//    Output(iarr, size);
//    delete[] iarr;
//    return 0;
//}
