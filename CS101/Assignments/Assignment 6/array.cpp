# include <iostream>
using namespace std;
void function(int arr[],int n);
int main()
{
	
	int arr[10];
	int n;
	
	cout<<"Enter the elements of the array: \n";
	function(arr,n);
}

void function(int arr[], int n)
{
	for(int i=0; i<10; i++)
	{
		cout<<"arr"<<i<<" ";
		cin>>arr[i];
	}
	
	cout<<"The reverse of the array is: "<<endl;
	for(int i=9; i>=0; i--)
	{
		cout<<arr[i]<<" ";
	}
}
