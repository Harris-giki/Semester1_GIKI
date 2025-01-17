# include <iostream>
using namespace std;
int main()
{

	int s=1;
	while(s<=5)
	{
		int p=1;
		while(p<=s)
		{
			cout<<p*p<<"\t";
		    p++;
		}
		s++;
		cout<<endl;
	}
	return 0;
}

