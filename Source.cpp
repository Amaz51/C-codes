#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;

void check(ifstream& data) {
    char check;
    do {
        data >> check;
        if (check == '/') {
            string discard;
            getline(data, discard);
            data >> check;
        }
        
    } while (!isdigit(check));
    data.putback(check);
}

int** InputMatrix(ifstream& fin, int& rows, int& cols) {
    //Allocating Memory
    int** arr = new int* [rows];
    for (int i = 0; i < rows; i++) {
        *(arr+i) = new int[cols];
    }
    //Inputing from file
    for (int i = 0; i < rows; i++) {
        int* ptr = *(arr+i);
        for (int j = 0; j < cols; j++) {
            check(fin);
            fin >> *ptr;
            ptr++;
        }
    }
    return arr;
}

void OutputMatrix(int** matrix, const int& ROWS, const int& COLS) {
    for (int i = 0; i < ROWS; i++) {
        int* ptr = *(matrix + i);
        for (int j = 0; j < COLS; j++) {
            cout << *ptr << "\t";
            ptr++;
        }
        cout << endl;
    }
}

int** AddMatrix(int** matrixA, int** matrixB, const int& ROWS, const int& COLS) {
    int** matrixR = new int* [ROWS];
    for (int i = 0; i < ROWS; i++) {
        *(matrixR + i) = new int[COLS];
    }

    for (int i = 0; i < ROWS; i++) {
        int* ptrA = *(matrixA + i);
        int* ptrB = *(matrixB + i);
        int* ptrR = *(matrixR + i);
        for (int j = 0; j < COLS; j++) {
            *ptrR = *ptrB + *ptrA;
            ptrA++,ptrB++,ptrR++;
        }
    }
    return matrixR;
}

int** TransposeMatrix(int** matrix, const int& ROWS, const int& COLS) {
    int** matrixR = new int* [COLS];
    for (int i = 0; i < COLS; i++) {
        *(matrixR + i) = new int[ROWS];
    }
   
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            *(*(matrixR + j) + i) = *(*(matrix + i) + j);
        }
    }
    return matrixR;
}

bool IsSymmetric(int** matrix, const int& ROWS, const int& COLS) {
    if (ROWS != COLS)return 0;
    bool ans=1;
    int** tran = TransposeMatrix(matrix, ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (*(*(tran + i) + j) != *(*(matrix + i) + j))
                ans = 0;
        }
    }
    for (int i = 0; i < COLS; i++)delete[] tran[i];
    delete[] tran;
    return ans;
}

void InterchangeRows(int*& row1, int*& row2) {
    int* temp = row1;
    row1 = row2;
    row2 = temp;
}

void InterchangeRows(int** matrix, const int& ROWS, const int& COLS) {
    int r1=1, r2=3;
    cout << "row1: " << r1<<endl;
    cout << "row2: "<<r2<<endl;
    //Hard code as told
    int* ptr1 = *(matrix + r1 - 1);
    int* ptr2 = *(matrix + r2 - 1);
    InterchangeRows(ptr1,ptr2);
    *(matrix + r1 - 1)=ptr1;
    *(matrix + r2 - 1) = ptr2;
    return;
}

int main() {

    ifstream data{ "InputFile.txt" };
    if (!data) return -1;

    int r1, c1, r2, c2, r3, c3;

    //check function goes to the integer type variable in the text file
    check(data);
    data >> r1;
    check(data);
    data >> c1;
    int** matrix1 =  InputMatrix(data, r1, c1);
    check(data);
    data >> r2;
    check(data);
    data >> c2;
    int** matrix2 = InputMatrix(data, r2, c2);
    check(data);
    data >> r3;
    check(data);
    data >> c3;
    int** matrix3 = InputMatrix(data, r3, c3);
 

    cout << "Matrix A=" << endl;
    OutputMatrix(matrix1, r1, c1);
    cout <<endl<< "Matrix B=" << endl;
    OutputMatrix(matrix2, r2, c2);
    cout <<endl<< "Matrix C=" << endl;
    OutputMatrix(matrix3, r3, c3);
 

    int** addedmat = nullptr;
    cout << endl << "A+B=" << endl;
    if (r1 != r2 || c1 != c2)cout << "Addition not possible" << endl;
    else {
        addedmat = AddMatrix(matrix1, matrix2, r1, c1);
        OutputMatrix(addedmat, r1, c1);
    }

    int** addedmat2 = nullptr;
    cout <<endl<< "A+C=" << endl;
    if (r1 != r3 || c1 != c3)cout << "Addition not possible" << endl;
    else {
        addedmat2 = AddMatrix(matrix1, matrix3, r1, c1);
        OutputMatrix(addedmat2, r1, c1);
    }


    cout << endl << "Transpose of Matrix A:"<<endl;
    int** tran1 = TransposeMatrix(matrix1, r1, c1);
    OutputMatrix(tran1, c1, r1);

    cout << endl << "Transpose of Matrix C:" << endl;
    int** tran2 = TransposeMatrix(matrix3, r3, c3);
    OutputMatrix(tran2, c3, r3);


    if (IsSymmetric(matrix1, r1, c1))
        cout << endl << "Matrix A is Symmetric" << endl;
    else  cout << endl << "Matrix A is NOT Symmetric" << endl;
    
    if (IsSymmetric(matrix2, r2, c2))
        cout << endl << "Matrix B is Symmetric" << endl;
    else  cout << endl << "Matrix B is NOT Symmetric" << endl;


    cout << endl << "Interchanging rows of Matrix A" << endl;
    InterchangeRows(matrix1, r1, c1);
    cout << "After interchanging rows Matrix A=" << endl;
    OutputMatrix(matrix1, r1, c1);


    //deallocation
    if (matrix1 != nullptr) {
        for (int i = 0; i < r1; i++)delete[] matrix1[i];
        delete[] matrix1;
        matrix1 = nullptr;
    }
    if (matrix2 != nullptr) {
        for (int i = 0; i < r2; i++)delete[] matrix2[i];
        delete[] matrix2;
        matrix2 = nullptr;
    }
    if (matrix3 != nullptr) {
        for (int i = 0; i < r3; i++)delete[] matrix3[i];
        delete[] matrix3;
        matrix3 = nullptr;
    }
    if (addedmat != nullptr) {
        for (int i = 0; i < r1; i++)delete[] addedmat[i];
        delete[] addedmat;
        addedmat = nullptr;
    }
    if (addedmat2 != nullptr) {
        for (int i = 0; i < r1; i++)delete[] addedmat2[i];
        delete[] addedmat2;
        addedmat2 = nullptr;
    }
    if (tran1 != nullptr) {
        for (int i = 0; i < c1; i++)delete tran1[i];
        delete[] tran1;
        tran1 = nullptr;
    }
    if (tran2 != nullptr) {
        for (int i = 0; i < c3; i++)delete tran2[i];
        delete[] tran2;
        tran2 = nullptr;
    }
    data.close();
    return 0;
   
}