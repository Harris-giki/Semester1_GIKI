# include <iostream>
using namespace std;

void swap(int& , int&);

int main()
{
	int a,b;
	cout<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	
	cout<<endl;
	swap(a,b);
	cout<<"a: "<<a<<"\n"<<"b: "<<b;
}

void swap (int & a, int & b)
{
	a = a+b;
	b = a-b;
	a = a-b;
}
