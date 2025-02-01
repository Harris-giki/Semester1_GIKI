# include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter a number: ";
	cin>>n;
	
	cout<<endl;
	
	int *ptr = NULL;
	
	ptr = &n;
	
	cout<<"The adress of "<<n<<" is "<<ptr;
	
	int **ptr2 = NULL;
	
	ptr2 = & ptr;
	
	cout<<endl<<"The address of the pointer is "<<ptr2;
	
	cout<<endl<<"The value stored in the address is "<<**ptr2;
	return 0;
}
