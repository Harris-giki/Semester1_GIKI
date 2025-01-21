# include <iostream>
using namespace std;

void transpose( int array[][20] );

int main()
{
	int r;
	int c;
	cout<<"Enter the number of rows:";
	cin>>r;
	cout<<endl;
	cout<<"Enter the number of columns: ";
	cin>>c;
	
	int array[r][c];	
	for(int i=0; i<r; i++)	{
		for(int j=0; j<c; j++)
		{
			cout<<"row: "<<i<<" column: "<<j<<"  ";
			cin>>array[i][j];
		}}	
	cout<<endl<<"The given matrix is:"<<endl;
	
	for(int i=0; i<c; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<"\t"<<array[i][j]<<"  ";
		}
		cout<<endl;
	}
	for(int i=0; i<r; i++){
		for(int j=i; j<c; j++)	{
			int temp = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = temp;}}
	cout<<endl<<endl;
	cout<<"The transpose of the given matrix is: ";
	cout<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++)
		{
			cout<<"\t"<<array[i][j]<<"  ";
		}
		cout<<endl;}
	return 0;
}
