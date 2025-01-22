# include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char arr1[100];
	char arr2[100];
	cout<<"Enter the first string: ";
	cin.getline(arr1,100,'\n');
	cout<<"Enter the second string: ";
	cin.getline(arr2,100,'\n');
	if(strcmp(arr1,arr2)==0){
		cout<<"EQUAL";}
	else
		cout<<"NOT EQUAL";	
	return 0;
}
