# include <iostream>
using namespace std;
int main()
{
	for(int i=5; i>=1; i--)
	{
		for(int k=5-i; k>=i; k--)
		{
			cout<<" ";
		}
		
		for(int j=1; j<=10-1; j++)
		{
			cout<<"* ";
		}
		
		cout<<endl;
	}
}
