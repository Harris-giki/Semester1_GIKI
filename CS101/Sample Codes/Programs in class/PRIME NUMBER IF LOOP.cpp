// prime number

# include <iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter a number: ";
	cin>>n;
	
	int i=2;
	for(int i=2; i<n; i++)
	{
		if( n % i == 0 )
		{
			cout<<endl<<"NOT A PRIME NUMBER"<<endl;
			break;
		}
		
		i++; 			
	}
    
    if(i==n)
    {
    	cout<<endl<<"PRIME NUMBER"<<endl;
	}
	

	
	return 0;
}
