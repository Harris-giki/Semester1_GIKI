# include <iostream>
using namespace std;
int main()
{
	int num;
	int factorial=1;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	for(int i=1; i<=num; i++)
	{
		factorial = factorial * i;
	}
	
	cout<<"The Factorial of "<<num<<" is:  "<<factorial;

    return 0; 
}
