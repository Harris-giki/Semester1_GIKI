# include <iostream>
using namespace std;
int main()
{
	for(int i=1; i<=5; i++)
	{
		for(int k=1; k<=5-i; k++)
		{
			cout<<" ";
		}
		for(int j=1; j<=-i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
