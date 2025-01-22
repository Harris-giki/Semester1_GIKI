# include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char str1[100];
	char str2[100];
	
	cout<<"Enter the first string: ";
	cin.getline(str1,100,'\n');
	cout<<endl<<"Enter the second string: ";
	cin.getline(str2,100,'\n');
	
	cout<<endl<<"CONCATENTION OF TWO STRINGS: ";
	strcat(str1, str2);
	cout<<str1;
}
