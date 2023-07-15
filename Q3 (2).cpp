#include<iostream>
using namespace std;
int main()
{
	
	int a[3][5];
	double s=0;
	for(int i=0;i<3;i++)
	{    
		for(int j=0;j<5;j++)
		{
			cout<<"Enter "<<i+1<<" monkey food of "<<j+1<<" day :";
			cin>>a[i][j];
			if(a[i][j]<0)
			{
				do{
					cout<<"you entered wrong input please correct"<<endl;
					cout<<"Enter "<<i+1<<" monkey food of "<<j+1<<" day in pounds :";
			        cin>>a[i][j];
				}while(a[i][j]<0);
			}
			s=s+a[i][j];
			cout<<endl;
		}
		cout<<endl;
	}
	int max,min,m1,m2;
	max=min=a[0][0];
	
	for(int i=0;i<3;i++)
	{    
		for(int j=0;j<5;j++)
		{ 
		 if(a[i][j]<min)
		  {
		     min=a[i][j];
		     m1=i+1;
		  }
	     if(a[i][j]>max)
	     {
	     	max=a[i][j];
	     	m2=i+1;
		 }
        }
}
	s=s/15.0;
	cout<<"the average food eaten by whole family of MONKEYS :"<<s<<endl;
	cout<<"the greatest food is :"<<max<<" eaten by monkey "<<m2<<" during the week "<<endl;
	cout<<"the least food is :"<<min<<" eaten by monkey "<<m1<<" during the week"<<endl;
}