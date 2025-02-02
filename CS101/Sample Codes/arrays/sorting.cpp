# include <iostream>
using namespace std;
int main()
{
	int n;
	
	int array[n];
	
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	
	cout<<"Array = ";
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(array[j]<array[i])
			{
				int temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}
	
	cout<<"Sorted Array = ";
	for(int i=0; i<n; i++)
	{
		cout<<array[i]<<"  ";
	}
}
