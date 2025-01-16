# include <iostream>
using namespace std;
int main()
{
	int num;
	
	cout<<"Enter a number: ";
	cin>>num;
	int store = num;
	int reverse = 0 ;
	int remainder;
	
	while( num != 0)
	{
		remainder = num % 10;
		
		reverse = reverse*10 + remainder;
		
		num = num/10;
	}
	
	if( reverse == store )
	{
		cout<<endl<<"THE NUMBER IS A PALINDROME"<<endl;
	}
	
	else
	{
		cout<<endl<<"THE NUMBER IS NOT  A PALINDROME"<<endl;
	}
	
	return 0;
	
}

