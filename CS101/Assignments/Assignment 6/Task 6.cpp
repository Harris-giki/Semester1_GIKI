# include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	int sum;
	int *aptr = NULL;
	aptr = &a;
	int *bptr = NULL;
	bptr = &b;
	sum = *aptr + *bptr;
	cout<<endl<<"The sum is : "<<sum;
}
