# include <iostream>
using namespace std;

int func(int *ptr)
{
	cout<<"Enter a number: ";
	cin>>*ptr;
	
	return *ptr;
}

int main()
{
	int n;
	
	int *ptr = NULL;
	
	ptr = &n;
	 
	cout<<func(ptr);
}
