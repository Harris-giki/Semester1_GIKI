# include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter a number: ";
	cin>>n;
	cout<<endl;
	
	int i;
	for( i=2; i<n; i++)
	{
		if(n % i == 0)
		{
			cout<<"NOT A PRIME NUMBER";
			break;
		}
	}
	
	if( i == n )
	{
		cout<<"PRIME NUMBER";
	}
	
	return 0;
}
