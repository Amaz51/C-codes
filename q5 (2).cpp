#include<iostream>
using namespace std;
struct Budget
{
	double Housing, Utilities, HouseholdExpense, Transportation, Food, Medical, Insurance, Entertainment,Clothing, Miscellaneous;
};

void getSpent(Budget& B)
{
	cout << "During the past month:\n";
	cout << "How much was spent on Housing? ";
	cin >> B.Housing;
	cout << "How much was spent on Utilities? ";
	cin >> B.Utilities;
	cout << "How much was spent on Household expenses? ";
	cin >> B.HouseholdExpense;
	cout << "How much was spent on Transportation? ";
	cin >> B.Transportation;
	cout << "How much was spent on Food? ";
	cin >> B.Food;
	cout << "How much was spent on Medical? ";
	cin >> B.Medical;
	cout << "How much was spent on Insurance? ";
	cin >> B.Insurance;
	cout << "How much was spent on Entertainment? ";
	cin >> B.Entertainment;
	cout << "How much was spent on Clothing? ";
	cin >> B.Clothing;
	cout << "How much was spent on Miscellaneous? ";
	cin >> B.Miscellaneous;
}

void checker(double a, double b) {
	if (b > a) {
		cout << b - a << "$ amount";
		cout << " Over"<<endl;
	}
	else
	{
		cout << a - b << "$ amount";
		cout << " under" << endl;
	}
}

double caltotal(Budget B) {
	return B.Housing + B.Utilities + B.HouseholdExpense + B.Transportation
		+ B.Food + B.Medical + B.Insurance + B.Entertainment +
		B.Clothing + B.Miscellaneous;
}

void display(Budget B, Budget S)
{
	double Totalbudget, Totalspent;

	cout << "\nMonthly budget report\n";

	cout << "Housing: ";
	checker(B.Housing, S.Housing);

	cout << "Utilities: ";
	checker(B.Utilities, S.Utilities);

	cout << "Household expenses: ";
	checker(B.HouseholdExpense, S.HouseholdExpense);

	cout << "Transportation: ";
	checker(B.Transportation, S.Transportation);

	cout << "Food: ";
	checker(B.Food, S.Food);

	cout << "Medical: ";
	checker(B.Medical, S.Medical);

	cout << "Insurance: ";
	checker(B.Insurance, S.Insurance);

	cout << "Entertainment: ";
	checker(B.Entertainment, S.Entertainment);

	cout << "Clothing: ";
	checker(B.Clothing, S.Clothing);

	cout << "Miscellaneous: ";
	checker(B.Miscellaneous, S.Miscellaneous);

	Totalbudget = caltotal(B);
	Totalspent = caltotal(S);
	cout << "Entire budget: ";
	checker(Totalbudget, Totalspent);
}

//int main()
//{
//	Budget B = { 500.00, 150.00, 65.00, 50.00, 250.00,
//							30.00, 100.00, 150.00, 75.00, 50.00};
//	Budget Sp;
//
//	getSpent(Sp);
//	display(B, Sp);
//	return 0;
//}
