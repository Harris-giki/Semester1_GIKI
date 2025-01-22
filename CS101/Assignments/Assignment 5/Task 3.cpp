# include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char arr[100];
	cout<<"Enter your string: ";
	cin.getline(arr,100,'\n');
	int n = strlen(arr);
	char reverse[100];
	for(int i=0; i<n; i++)	{
		reverse[n-i-1] = arr[i];	}
	if(strcmp(arr,reverse)==0)	{
		cout<<"It is a Palindrome";	}
	else
		cout<<"Not a Palindrome";
}
