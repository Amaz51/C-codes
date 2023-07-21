#include <iostream>
#include <cstring>
using namespace std;
int search(char paragraph[], char substring[])
{
	int count=0,size;
	size = sizeof(substring);
	for (int i = 0; paragraph[i] != 0; i++)
	{
		int sizet=0;

		if (paragraph[i] == substring[0])
		{
			for (int j = 0; substring[j] != 0; j++)
			{
				if (paragraph[i + j] == substring[j])
				{
					sizet++;
					if (sizet == size)
					{

						count++;
					}
				}
			}
		}
	}
	
	return count;
}
int main()
{
	char paragraph[1000]={ "programming is taught in programming fundamentals lab.Students find programming interesting"};
	char substring[1000] = { "programming" };

	cout << "Enter paragraph: " << endl << paragraph << endl;
	

	cout << "Enter Substring to search: " << substring << endl;
	

	cout<<"The number of times it got repeated is : "<<search(paragraph, substring);
}
