# include <iostream>
using namespace std;
int swap(int *aptr, int *bptr)
{
	int temp = *aptr;
	*aptr = *bptr;
	*bptr = temp;
}
int main()
{
	int a, b;
	cout<<"Before Swap: "<<endl;
	cout<<" a = ";
	cin>>a;
	cout<<" b = ";
	cin>>b;
	int *aptr = NULL;
	int *bptr = NULL;
	aptr = & a;
	bptr = & b;
	cout<<endl<<"After swap: "<<endl;
	swap(a,b);
	cout<<" a = "<<a;
	cout<<endl;
	cout<<" b = "<<b;
}
