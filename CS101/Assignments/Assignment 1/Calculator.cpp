# include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	char Operator;
	
	cout<<"Enter first value: ";
	cin>>num1;
	
	cout<<"Enter the Arithemtic Operator: ";
	cin>>Operator;
	
	cout<<"Enter second value: ";
	cin>>num2;
	
	switch(Operator)
	{
		case  ('+'):
			cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
			break;

		case ('-'):
			cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
			break;

		case ('*'):
			cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
		    break;

		case ('/'):
			cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
			break;

		case ('%'):
			cout<<num1<<" % "<<num2<<" = "<<num1%num2;
			break;			
			
		default:
		cout<<"Invalid Operator";	
	}
	
	return 0;
}

