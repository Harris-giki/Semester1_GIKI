# include <iostream>
using namespace std;

void multiplication(int arr[][2], int n2, int n3);

int main()
{
	int n1, n2, n3;
	
	cout<<"Enter number of rows in Matrix A: ";
	cin>>n1;
	cout<<endl<<"Enter number of columns in Matrix A"<<endl<<
	" and Number of rows in Matrix B: ";
	cin>>n2;
	cout<<endl<<"Enter number of columns in Matrix B: ";
	cin>>n3;
	
	
	int A[n1][n2];
	int B[n2][n3];
	int C[n1][n3];
	
	cout<<"MATRIX A: "<<endl;
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n2; j++)
		{
			cout<<"Element  "<<i<<j<<"\t";
			cin>>A[i][j];
			cout<<endl;
		}
	}
	
	cout<<endl<<"MATRIX B: "<<endl;
	for(int i=0; i<n2; i++)
	{
		for(int j=0; j<n3; j++)
		{
			cout<<"Element  "<<i<<j<<"\t";
			cin>>B[i][j];
			cout<<endl;
		}
	}
	
	cout<<endl;
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			C[i][j] = 0;
		}
	}
	
	cout<<endl;
	
	cout<<"Matrix A * B = "<<endl;
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			for(int k=0; k<n2; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	cout<<endl;
	for(int i=0; i<n1; i++)
	{
		for(int j=0; j<n3; j++)
		{
			cout<<"\t"<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}
