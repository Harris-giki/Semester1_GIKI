# include <iostream>
using namespace std;

int fact(int);

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	
	cout<<endl;
	cout<<fact(n);
	
	return 0;
}

int fact(int n)
{
	int fact = 1;
	
	for(int i=1; i<=n; i++)
	{
		fact = fact * i;
	}
	
	return fact;
}




/*
# include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int fact=1;
	for(int i=1; i<=n; i++)
	{
		fact = fact * i;
	}
	cout<<endl<<fact;
}
*/
