# include <iostream>
# include <string.h>
using namespace std;
char func(char string[100])
{
	int n=strlen(string);
	cout<<"The reverse of the string: ";
	for(int i=n-1; i>=0; i--)
	{
		cout<<string[i];	}	}
int main()
{
	char string[100];
	cout<<"Enter your string: ";
	cin.getline(string,100,'\n');
	func(string);
}
