# include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char arr1[100];
	char arr2[100];
	char arr3[100];
	
	cin.getline(arr1,100,'\n');
	cin.getline(arr2,100,'\n');
	
	int n1 = strlen(arr1);
	int n2 = strlen(arr2);
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n2; j++){
		
		if(strcmp(arr1,arr2)==0)
		{	
			arr3[100] = arr1[i];
			break;
		}	
	}
	}
	cout<<arr3;
	
}
