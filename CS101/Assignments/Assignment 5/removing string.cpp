# include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char str1[100];
	char str2[100];
	
	cout<<"Enter string 1 ";
	cin.getline(str1,100);
	
	cout<<"Enter string 2 ";
	cin.getline(str2,100);
	
	
	int m = strlen(str1);
	int n = strlen(str2);
	
	int p = m-1;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			if (strcpm(str2[j],str1[i])==0)
			{
				str1.erase(i,p);
			}
		}
	}
	
	cout<<"After erasing "<<endl;
	cout<<str1;
	return 0;
}
