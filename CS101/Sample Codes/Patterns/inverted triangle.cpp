# include <iostream>
using namespace std;
int main()
{
	for(int i=1; i<=5; i++)
	{
		for(int k=1; k<=i-1; k++)
		{
			cout<<" ";
		}
		for(int j=1; j<=6-i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
