# include <iostream>
using namespace std;

void age(int);

int main()
{
	int a;
	
	cout<<"Enter your age: ";
	cin>>a;
	
	cout<<endl;
	age(a);

    return 0;
}

void age(int a)
{
	if( a>= 18 )
	{
		cout<<endl<<"You are eligible for voting ";
	}
	else
	{
		cout<<"You are not eligible for voting ";
	}
}
