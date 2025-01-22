# include <iostream>
using namespace std;
int main()
{
	int n;
	
	int arr[n];
	
	cout<<"Enter the Size for Array: ";
	cin>>n;
	cout<<endl;
	
	cout<<"Enter "<<n<<" Elements in the array: ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	int min = arr[n-1];
	int *ptr = NULL;
	ptr = & min;
	for(int i=0; i<n; i++)
	{
		if(min>arr[i])
		{
			min = arr[i];
		}
	}
	
	cout<<"Smallest Number = "<<*ptr;
	
	return 0;
}
