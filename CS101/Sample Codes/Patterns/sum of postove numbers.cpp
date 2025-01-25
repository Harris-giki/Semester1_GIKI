# include <iostream>
using namespace std;
int main()
{
	int positive;
	int sum;
	int i=0;
	cin>>positive;
	
	while(positive>=0)
	{
		sum = sum +positive;
	    
		cin>>positive;
	}
	
	cout<<"The sum is"<<sum;
}
