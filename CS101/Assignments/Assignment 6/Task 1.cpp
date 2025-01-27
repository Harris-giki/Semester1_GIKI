# include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a variable: ";
	cin>>n;
	int *ptr = NULL;
	ptr = & n;
	cout<<endl<<"The address of the variable is : "<<ptr; 
	return 0;
}
