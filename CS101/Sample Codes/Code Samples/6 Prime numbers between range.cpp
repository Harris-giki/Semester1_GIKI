# include <iostream>
using namespace std;
int main()
{
	int low,high;
	
	cout<<"Enter a lower number: ";
	cin>>low;
	
	cout<<"Enter a higher number: ";
	cin>>high;
	
	
	for(int i=low; i<=high; i++)
	{
		int j;
		for(j=2; j<i; j++)
		{
		if( i%j == 0)
		{
			break;
		}
	}
	if( j == i )
	{
		cout<<i<<endl;
	}
}
	
	
	return 0;
}
