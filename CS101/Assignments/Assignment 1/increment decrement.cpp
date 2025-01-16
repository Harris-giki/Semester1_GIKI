//7. increment and decrement

# include <iostream>
using namespace std;
int main()
{
	int x = 2;
	int z = 4;
	
	//cout<<"x++ + ++x = ";
	//cout<<x++ + ++x<<endl;
	
	//cout<<"++x + ++x = ";
	//cout<<++x + ++x;
	
	//cout<<"++x + ++x + ++x = ";
	//cout<<++x + ++x + ++x;
	
	//bool y =x>z;
	//cout<<y;
	
	//cout<<( x>z ? x:z );
	
	//int y= x&z;
	//cout<<y;
	
	int y= x>>2 + z<<1;
	cout<<y;
	
	return 0;
}

