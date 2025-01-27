# include <iostream>
using namespace std;
int main()
{
	for(int i=1; i<=6; i++)
	{     int num=1;
		for(int k=1; k<=6-i; k++)
		{
			cout<<" ";
		}
		for( int j=0; j<=1; j++)
		{
			cout<<num<<" ";
			num = num*(i-j)/(j+1);
		}
		cout<<endl;
	}
}
