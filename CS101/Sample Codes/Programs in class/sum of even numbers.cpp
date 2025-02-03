//sum of even numbers

# include <iostream>
using namespace std;
int main()
{
	int i;
	int sum=0;
	
	for(i=0; i<=100; i+=2)
	{
		sum = sum + i;
	}
	
	cout<<"The sum of first 100 even number is: "<<endl<<sum;
	
	return 0;
}
