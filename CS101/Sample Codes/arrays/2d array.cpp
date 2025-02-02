# include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3;
	
	int a1[n1][n2];
	int a2[n2][n3];
	
	cout<<"Enter the number of rows in the first matrix: ";
	cin>>n1;
	
	cout<<endl<<"Enter the number of columns in the first matrix and the number of rows in second matrix: ";
	cin>>n2;
	
	cout<<endl<<"Enter the number of rows in the second matrix: ";
	cin>>n3;
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n2; j++)
		{
			cout<<"Enter the elements of the first matrix: ";
			cin>>a1[i][j];
		}
	}
	
	
	cout<<endl;
	
	for(int i=0; i<n2; i++)
	{
		for(int j=0; j<n3; j++)
		{
			cout<<"Enter the elements of the second matrix: ";
			cin>>a2[i][j];
		}
	}

	int a3[n1][n3];
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			a3[i][j] = 0;
		}
	}
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			for(int k=0; k<n2; k++)
			{
				a3[i][j] += a1[i][k] * a2[k][j];
			}
		}
	}
	
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			cout<<a3[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
