#include<iostream>
using namespace std;
struct division{
	string name;
	float first, second, third, fourth, total, average;
};
void get_calculate(division &a) {
	cout << "Enter First quarter sales: ";
	cin >> a.first;
	cout << "Enter secod quarter sales: ";
	cin >> a.second;
	cout << "Enter third quarter sales: ";
	cin >> a.third;
	cout << "Enter Fourth quarter sales: ";
	cin >> a.fourth;
	if (a.first < 0 || a.second < 0 || a.third < 0 || a.fourth < 0)
	{
		cout << "Wrong input" << endl;
		get_calculate(a);
	}
	else {
		a.total = a.first + a.second + a.third + a.fourth;
		a.average = a.first + a.second + a.third + a.fourth / 4.0f;
		cout << "Total annual Sales = " << a.total << endl;
		cout << "Average Sales = " << a.average << endl;
	}
}
//int main(){
//	division E,W,N,S;
//	E.name = "East" ;
//	W.name = "West";
//	N.name = "North";
//	S.name = "South";
//	cout << "------Enter sales of East divison-------" << endl;
//	get_calculate(E);
//	cout << "------Enter sales of West divison-------" << endl;
//	get_calculate(W);
//	cout << "------Enter sales of South divison-------" << endl;
//	get_calculate(S);
//	cout << "------Enter sales of North divison-------" << endl;
//	get_calculate(N);
//	return 0;
//}