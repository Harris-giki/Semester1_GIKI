# include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cout<<"arr"<<i<<"   ";
		cin>>arr[i];
	}
	
	int *ptr;
	ptr = arr;
	cout<<"Ouptput using arrrays: ";
	for(int i=0; i<n; i++)
	{
		cout<<*ptr<<" ";
		ptr++;
	}
	cout<<endl;
	int sum=0;
	
	for(int i=0; i<n; i++)
	{
		sum = sum + arr[i];
	}
		int *sptr;
		sptr = & sum;
		cout<<"Sum using pointers: ";
		cout<<*sptr;
		
}
