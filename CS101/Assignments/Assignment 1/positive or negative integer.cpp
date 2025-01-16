//5. Positive or negative integer

# include <iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter an Integer: ";
	cin>>num;
	
	if(num>=0)
	{
		cout<<endl<<"Positve Integer"<<endl;
	}
	else
	{
		cout<<endl<<"Negative Integer"<<endl;
	}
	
	return 0;
}
