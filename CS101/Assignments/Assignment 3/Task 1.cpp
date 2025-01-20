# include <iostream>
using namespace std;
int times_Ten(int);            //declaring function
int main()
{
	int number;
	
	cout<<"Enter a number: ";
	cin>>number;
	
	cout<<endl;
	cout<<number<<" * 10 = "<<times_Ten(number);  //function call
	
	return 0;
}
int times_Ten(int number)                    //function definition
{
	int product;
	product = number * 10;
	return product;
}

