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
		for(int j=1; j<=2*i-1; j++)
		{
			if(j== 1 || j==3 || j==5 || j==7 || j==9)
			{
				if (j%2 != 0)
				cout<<j;
			}
			else if(j==2 || j==4 || j==6 || j==8)
			{
				if (j%2 == 0)
				cout<<j;
				}	
		}
		cout<<endl;
	}
}
