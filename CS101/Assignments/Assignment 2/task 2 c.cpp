# include <iostream>
using namespace std;
int main()
{
	int i=1;
	while(i<=5)
	{
		int j=1;
		while(j<=6-i)
		{
			cout<<j+5<<"\t";
			j++;
		}
		i++;
		cout<<endl;
	}
}
