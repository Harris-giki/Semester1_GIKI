// 0 1 1 2 3 5 8 13 21 34 
// 0 1 2 3 4 5 6 7  8  9 

# include <iostream>
using namespace std;

int fib(int num);

int main()
{
	int n;
	
	cout<<"Enter the term: ";
	cin>>n;
	
	cout<<fib(n);
	cout<<endl<<endl;
	
	cout<<"FIBONNACI SERIES TILL THE "<<n<<"th TERM"<<endl;
	for(int i=0; i<=n; i++)
	{
		cout<<fib(i)<<" ";
	}
}

int fib(int n)
{
	if(n==0 || n==1)
	{
		return n;
	}
	else
	return fib(n-1) + fib(n-2);
}
