#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int n,k=2;
	a[0] = 2;
	a[1] = 3;

	cin >> n;

	for (int i = 4; i < n; i++)
	{
		bool check = true;
		
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0 ) 
			{
				check = false;
			}
		}
		if (check == true)
		{
			a[k] = i;
			k++;
		}
	}
	
	for (int i = 0; i < k; i++)
	{
		cout << a[i]<<" ";
	}

	cout << endl;

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
		{
			if (a[i] + a[j] == n)
			{
				cout << a[i] << " + " << a[j] << " = " << n<<endl;
			}
		}
	}
}