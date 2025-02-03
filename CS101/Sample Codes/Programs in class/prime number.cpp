# include <iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter your number:  ";
	cin>>num;
	
	int i;
	for( i=2; i<= num/2 ; i++)
	{
		if (num % i == 0)
		cout<<"NOT A PRIME NUMBER; divisble by"<<i<<endl;
		break;
	}
	
	
	
		cout<<"PRIME NUMBER";
		
	
	return 0;
}
