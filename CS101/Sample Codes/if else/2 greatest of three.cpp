# include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<endl;
	
	cout<<"Enter the second number: ";
	cin>>b;
	cout<<endl;
	
	cout<<"Enter the third number: ";
	cin>>c;
	cout<<endl;
	
	if ( a > b)
	{
		if ( a > c)
		{
			cout<<a<<"  is the greatest number";
		}
		
		else
		{
			cout<<c<<"  is the greatest number";
		}
}
	else if( b > a)
	{
		if ( b > c)
		{
			cout<<b<<"  is the greatest number";
		}
		else 
		{
			cout<<c<<"  is the greatest number";
		}
	}
	
	return 0;
}
