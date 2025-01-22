# include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char arr[100];
	cout<<"Enter the string: ";
	cin.getline(arr,100,'\n');
	int count = 0;
	for(int i=0; i<strlen(arr); i++)
	{
		count++;
	}
	cout<<endl;
	cout<<"The length of the string is: "<<count;
		return 0;
		}
		

