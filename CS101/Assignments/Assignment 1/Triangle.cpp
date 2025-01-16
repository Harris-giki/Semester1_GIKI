# include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter First angle of the triangle: ";
	cin>>a;
	
	cout<<"Enter second angle of the triangle: ";
	cin>>b;
	
	cout<<"Enter third angle of the triangle: ";
	cin>>c;
	
	int sum=0;
	sum = a+b+c;
	
	if( sum == 180)
	{
		cout<<"\t****VALID TRIANGLE****\t";
	}
	else
	{
		cout<<"\t****INVALID TRIANGLE****\t";
	}
	
	return 0;
}

