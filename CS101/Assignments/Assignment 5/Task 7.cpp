# include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char string[100];
	cout<<"Enter your string: ";
	cin.getline(string,100,'\n');
	int a = strlen(string);
	cout<<endl<<"string from backward:\n";
	for(int i=a-1; i>=0; i--)
	{
		cout<<string[i];
	}
}
