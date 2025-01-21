# include <iostream>
using namespace std;

void SUM(int array[], int & n);
void MAX(int array[], int & n);
void MIN(int arr[], int & n);
void AVG(int arr[], int & n);

int main()
{
	int n;
	int arr[n];
	
	cout<<"Enter the number of elements in the array: ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"arr["<<i<<"]"<<"\t";
		cin>>arr[i];
	}
	
	SUM(arr, n);
	cout<<endl;	
	MAX(arr, n);
	cout<<endl;
	MIN(arr, n);
}

void SUM(int array[], int & n)
{
	float sum = 0;
	for(int i=0; i<n; i++)
	{
		sum += array[i];
	}
	cout<<endl;
	cout<<"THE SUM OF THE ELEMENTS IS: "<<sum;
	cout<<endl;
	cout<<"THE AVERGAE OF THE ELEMENTS IS: "<<sum/n;
}

void MAX(int array[], int & n)
{
	int max = array[0];
	for(int i=0; i<n; i++)
	{
		if(max<array[i])
		{
			max = array[i];
		}
	}
	cout<<"THE MAXIMUM OF THE ARRAY IS: "<<max;
}

void MIN(int array[], int & n)
{
	int min = array[n-1];
	for(int i=0; i<n; i++)
	{
		if(min>array[i])
		{
			min = array[i];
		}
	}
	cout<<"THE MINIMUM OF THE ARRAY IS: "<<min;
}
