# include <iostream>
# include <string.h>
using namespace std;
int main()
{
	char string[100];
	cout<<"Enter your string: ";
	cin.getline(string,100,'\n');
	int count = 0;
	for(int i=0; string[i]!='\0'; i++)	{
		if(string[i] == ' ')
		{
			count++;
	}	}
	cout<<endl;
	cout<<"The number of words in the string: "<<++count;
}
