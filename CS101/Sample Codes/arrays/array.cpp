# include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter the number of elements in the array:";
	cin>>n;
	
	int arr[n];
	
	cout<<endl<<"Write the elements of the array: ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	int max = arr[0];
	int min = arr[n-1];
	
	for(int i=0; i<n; i++)
	{
		if(max<arr[i])
		{
			max = arr[i];
		}
		if(min>arr[i])
		{
			min = arr[i];
		}
	}
	
	cout<<endl;
	cout<<"The largest value is: "<<max<<endl;
	cout<<"The minimum value is: "<<min<<endl;
}
