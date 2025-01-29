# include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	
	cout<<"Enter the first side of the triangle: ";
	cin>>a;
	cout<<endl;
	
	cout<<"Enter the second side of the triangle: ";
	cin>>b;
	cout<<endl;
	
	cout<<"Enter the third side of the triangle: ";
	cin>>c;
	cout<<endl;
	
	if( a==b && b==c )
	{
		cout<<"EQUILATERAL TRIANGLE";
	}
	
	else if ( a==b && b!=c || a!=b && b==c || a==c && a!=b)
	{
		cout<<"ISOCELES TRIANGLE";
	}
	
	else
	{
		cout<<"SCALENE TRIANGLE";
	}
	
	return 0;
	
}
