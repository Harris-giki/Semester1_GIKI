# include <iostream>
using namespace std;
int main(){
	int count = 0;	
	int arr[10];
	cout<<"Enter the elements of the array: "<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<"Element ["<<i<<"] : ";
		cin>>arr[i];	
		if(arr[i]>=10)
		{
			count++;
		}}
	cout<<"The number of intergers greater than 10: "<<count;
	return 0;
}

