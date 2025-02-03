# include <iostream>
using namespace std;

void odd_even(int );

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	cout<<endl;
	odd_even(n);

	return 0;
}

void odd_even(int n )
{
	if(n % 2 == 0)
	{
		cout<<"EVEN NUMBER";
	}
	else
	{
		cout<<"ODD NUMBER";
	}
}
