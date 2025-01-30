# include <iostream>
using namespace std;
int main()
{
	int a;
	
	cout<<"MULTIPLICATION TABLE OF: ";
	cin>>a;
	cout<<endl;
	
	for( int i=1; i<=10; i++)
	{
		cout<<a<<" * "<<i<<" = "<<a*i<<endl;
	}
	
	return 0;
}
