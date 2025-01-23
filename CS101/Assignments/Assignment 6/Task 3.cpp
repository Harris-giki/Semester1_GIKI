# include <iostream>
using namespace std;
int main()
{
	float n;
	cout<<"Enter a decimal value: ";
	cin>>n;
	cout<<endl;
	float *ptr = NULL;
	ptr = & n;
	cout<<"Increment of float value: "<<endl;
	cout<<"\t"<<++*ptr;
	return 0;
}
