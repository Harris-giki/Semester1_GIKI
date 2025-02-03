# include <iostream>
using namespace std;

void max_min(int, int, int);

int main()
{
	int a,b,c;
	
	cout<<"Enter first number: ";
	cin>>a;
	cout<<endl;
	
	cout<<"Enter second number: ";
	cin>>b;
	cout<<endl;
	
	cout<<"Enter third number: ";
	cin>>c;
	cout<<endl;
	
	max_min(a,b,c);
	
	return 0;
}

void max_min(int a, int b, int c)
{
	if(a>b)
	{
		if(a>c)
		{
			cout<<a<<" is the maximum"<<endl;
		}
		else
		{
			cout<<c<<" is the maximum"<<endl<<a<<" is minimum"<<endl;
		}
	}
	
	if(b>a)
	{
		if(b>c)
		{
			cout<<b<<" is maximum"<<endl;
		}
		else
		{
			cout<<c<<" is maximum"<<endl<<b<<" is minimum"<<endl;
		}
	}
	if(c>a)
	{
		if(c>b)
		{
			cout<<c<<" is maximum"<<endl;
		}
		else
		{
			cout<<b<<" is maximum"<<endl<<c<<" is minimum"<<endl;
			}	
	}
}
