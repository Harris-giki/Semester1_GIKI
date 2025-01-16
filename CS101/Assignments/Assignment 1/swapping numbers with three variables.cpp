# include <iostream>
using namespace std;
int main()
{
	int a , b, c;
	
	cout<<"BEFORE SWAPPING: "<<endl;
	cout<<"a = ";
	cin>>a;
	
	cout<<"b = ";
	cin>>b;
	
	c = a;
	a = b;
	b = c;
	
	cout<<"******************"<<endl;
	cout<<"AFTER SWAPPING: "<<endl;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	

	return 0;
}


