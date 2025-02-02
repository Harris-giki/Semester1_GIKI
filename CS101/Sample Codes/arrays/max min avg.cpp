# include <iostream>
using namespace std;
int main()
{
	int marks[5];
	int sum = 0;
	int max = marks[0];
	int min = marks[0];
	int avg;
	
	for(int i=0; i<=4; i++)
	{
		cout<<"Enter your Marks: ";
		cin>>marks[i];
		cout<<endl;
		
		sum = sum + marks[i];}
	for(int k=0; k<=4; k++)	
	{
 		if(max>marks[k])
		{
			max = marks[k];
		}
		
		if(min<marks[k])
		{
			min = marks[k];
		}
			
	}
	
	avg = sum / 5;
	
	cout<<"The average Marks: "<<avg<<endl;
	cout<<"The maximum Marks: "<<max<<endl;
	cout<<"The minimum Marks: "<<min<<endl;
	
	return 0;
}
