# include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter the range of the array: ";
	cin>>n;
	int marks[n];
	
	for(int i=0; i<n; i++){
		cout<<"Enter your marks: ";
		cin>>marks[i];
	}
	
	int max = marks[0];
	int min = marks[n-1];
	int sum = 0;
	
	for(int i=0; i<n; i++)
	{
		
		sum = sum + marks[i];
		
		if(max<marks[i])
		{
			max = marks[i];
		}
		if(min>marks[i])
		{
			min = marks[i];
		}
	}
	
	cout<<endl;
	
	cout<<"The maximum is: "<<max;
	cout<<endl;
	cout<<"The minimum is: "<<min;
	cout<<endl;
	cout<<"The average is: "<<sum/n;
}
