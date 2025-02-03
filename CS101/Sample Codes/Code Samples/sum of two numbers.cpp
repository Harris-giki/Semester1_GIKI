# include <iostream>
using namespace std;

int sum(int , int);

int main()
{
	int a , b;
	
	cout<<"Enter two numbers: "<<endl;
	cin>>a; cout<<"\t"; cin>>b;
	cout<<endl;
	 
	cout<<sum(a , b);
}

int sum (int a , int b)
{
	int sum = 0;
	sum = a + b;
	
	return sum;
}
