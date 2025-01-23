# include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char string[100];
	cout<<"Enter your string: ";
	cin.getline(string, 100, '\n');	
	int count = 0;
	for(int i=0; i<strlen(string); i++)
	{
		count++;
	}
	int *ptr = NULL;
	ptr = & count;
	cout<<*ptr;
}
