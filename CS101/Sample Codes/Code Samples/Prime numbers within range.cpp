# include <iostream>
using namespace std;
int main()
{
	int low,high;
	
	cout<<"low: ";
	cin>>low;
	
	cout<<"high: ";
	cin>>high;
	
	for(int i=low; i<=high; i++)
	{
		int j;
		for(j=2; j<i; j++)
		{
			if( i%2 == 0 )
			{
				break;
			}
		}
		if( i== j)
		cout<<i<<" ";
	}
}
