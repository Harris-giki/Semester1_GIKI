# include <iostream>
using namespace std;
int main()
{
	const int x=3;
	int y = 24;
	int z = 17;
	
	const int *ptr = &x;
	*ptr++;
	cout<<*ptr; 
}
