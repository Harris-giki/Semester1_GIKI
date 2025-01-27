# include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char arr[100];
	cout<<"Enter your array: ";
	cin.getline(arr,100);
	int count = 0;
	int n=strlen(arr);
	
	for(int i=0; i<n; i++)
	{
		int *ptr = NULL;
		ptr = &i;
		if(arr[*ptr]=='a'||arr[*ptr]=='e'||arr[*ptr]=='i'
					||arr[*ptr]=='o'||arr[*ptr]=='u')
		{
			count++;
		}
	}
	cout<<"The number of vowels are: ";
	cout<<endl<<count+1;
}
