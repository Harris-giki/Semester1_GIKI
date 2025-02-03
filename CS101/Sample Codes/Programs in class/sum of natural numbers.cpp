# include <iostream>
using namespace std;
int main()
{
	int num,n;
	int sum=0;
	cout<<"Enter a natural number:  ";
	cin>>n;
	
	
	for(num=1; num<=n; num++)
	{
		sum = sum + num;
	}
	
	cout<<"THE SUM IS = "<<sum;
	
	return 0;
	
}
