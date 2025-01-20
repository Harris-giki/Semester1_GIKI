# include <iostream>
using namespace std;

int max(int, int, int);

int main()
{
	int a, b, c;
	
	cout<<"Enter a number: ";
	cin>>a;
	
	cout<<"Enter a number: ";
	cin>>b;
	
	cout<<"Enter a number: ";
	cin>>c;
	
	cout<<"The largest of the three numbers is: ";
	cout<<max(a, b, c);
	
	return 0;
	
}

int max(int a, int b, int c)
{
	if(a>b)
	{
		if(a>c)
		{
			return a;
		}	
		else
		{
			return c;
		}
	}
	else if(b>a)
	{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}

