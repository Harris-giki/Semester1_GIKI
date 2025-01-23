# include <iostream>
using namespace std;
int main()
{
	int n;
	 int array[n];
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"array["<<i<<"] : ";
		cin>>array[i];
	}
	for(int i=0; i<n; i++)
	{
		cout<<array[i]<<" ";
	}
		
	int sum=0;
	for(int i=0; i<n; i++)
	{	sum = sum + array[i];	}
	cout<<endl;
	int *ptr = NULL;
	ptr = & sum;
	cout<<"The sum of the elements of the array is : "<<*ptr;
	return 0;
}
