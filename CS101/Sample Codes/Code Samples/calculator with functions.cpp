# include <iostream>
using namespace std;

float sum(float,float);
float subtract(float,float);
float multiply(float,float);
float divide(float,float);
int remainder(int,int);

int main()
{
	float a,b;
	int r;
	char op;
	int p,q;
	
	cout<<"Enter two operands: ";
	cin>>a||p;
	cout<<"\t";
	cin>>b||q;
	
	cout<<"Enter the Operator: ";
	cin>>op;
	
	if ( op == '+')
	{
			float c = sum (a,b);
			cout<<c;
		}
			
	else if ( op == '-')
	{
		float c = subtract (a,b);
		cout<<c;	
	}
	
	else if ( op == '*')
	{
		float c = multiply (a,b);
		cout<<c;
	}
	
	else if( op == '/' )
	{
		float c = divide(a,b);
		cout<<c;
	}
	
	else if( op == '%')
	{
		int r = remainder(p,q);
		cout<<r;
	}
	
	else
	{
		cout<<"Invalid Operator";
	}

	return 0;
	
}


	float sum(float a, float b)
	{
		float c = a + b;
		return c;
	}
	
	float subtract(float a, float b)
	{
		float c = a - b;
		return c;
	}
	
	float multiply(float a, float b)
	{
		float c = a*b;
		return c;
	}
	
	float divide(float a, float b)
	{
		float c = a/b;
		return c;
	}
	
	int remainder(int p, int q)
	{
		int r = p%q;
		return r;
	}
	
	
