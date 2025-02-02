# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
	int element[10];
	int value[10] = {24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
	
	cout<<"Element "<<setw(13)<<"Value";
	cout<<endl;
	for(int i=0; i<=9; i++)
	{
		
		cout<< i <<setw(17)<<value[i]<<endl;
	}
}


