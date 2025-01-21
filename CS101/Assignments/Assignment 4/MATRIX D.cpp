//sum of two matricses
/*
# include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the order of the matrix: ";
	cin>>n;
	
	int arr1[n][n];
	int arr2[n][n];
	int sum[n][n];
	
	cout<<endl<<"Enter the elements of matrix A: ";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>arr1[i][j];
		}
	}
	
	cout<<endl<<"Enter the elements of matrix B: ";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>arr2[i][j];
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	
	cout<<endl<<"A + B = "<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
}
*/
/*
# include <iostream>
using namespace std;
int main()
{
	int n;
	int arr[n];
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	for(int i=n-1; i>=0; i--)
	{
		cout<<arr[i]<<"  ";
	}
}
*/


