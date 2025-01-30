# include <iostream>
using namespace std;
int main()
{
	int a;
	int sum=0;
	
	cout<<"Enter a number: ";
	cin>>a;
	
	while(a>=0)
	{
		
		sum = sum + a;
		cout<<"Enter a positive number: ";
		cin>>a;
			
	}
	
	cout<<endl<<"The sum of positive numbers are: "<<sum;
	
	return 0;
}
