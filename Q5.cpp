#include<iostream>
using namespace std;
int
main ()
{


  for (int i = 1; i <= 5; i++)
    {

      for (int j = 5; j >= i; j--)
	{
	  cout << " ";
	}
      for (int k = 1; k <= i - 1; k++)
	{
	  cout << "* ";
	}
      for (int j = 5; j >= i; j--)
	{
	  cout << " ";
	}
      for (int k = 1; k <= i - 1; k++)
	{
	  cout << "* ";
	}

      cout << endl;
    }



  for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < i; j++)
	{
	  cout << " ";
	}
      for (int j = 0; j < 10 - i; j++)
	{
	  cout << "* ";
	}
      cout << endl;
    }
}