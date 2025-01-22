# include <iostream>
using namespace std;

void swap(int *, int *);

int main()
{
	int a, b;
	
	cout<<"Please Enter first number: ";
	cin>>a;
	
	cout<<"Please Enter Second number: ";
	cin>>b;
	
	cout<<"After swapping: "<<endl;
	
	swap(&a, &b);
	
	cout<<"First number = "<<a;
	cout<<"  and  Second Number = "<<b;	
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
