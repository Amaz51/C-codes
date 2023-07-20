#include <iostream>
using namespace std;
int main()
{
    int i = 0, rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    while (i < rows) {
        int u = rows;
        while (u > i) {
            cout << "*";
            u--;
        }
        cout << endl;
        i++;
    }i++;
    while (i < (rows + rows)) {
        int f = 0;
        while (f <= (i - rows)) {
            cout << "*";
            f++;
        }i++;
        cout << endl;
    }
}