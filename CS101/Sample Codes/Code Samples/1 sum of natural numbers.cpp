# include <iostream>
using namespace std;
int main()
{
	int a;
	
	cout<<"Enter the number: ";
	cin>>a;
	cout<<endl;
	
	int sum = 0;
	
	for( int i=1; i<=a; i++)
	{
		sum = sum + i;
	}
	
	cout<<"The sum of numbers till  "<<a<<"  is "<<sum;
	
	return 0;
	
}
