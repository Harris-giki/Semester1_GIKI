# include <iostream>
using namespace std;
int main()
{
	char alp;
	
	cout<<"Enter an alphabet: ";
	cin>>alp;
	cout<<endl;
	
	if( alp=='a' || alp=='A' || alp=='e' || alp=='E"' || alp=='i' || alp=='I'
	    || alp=='o' || alp=='O' || alp=='u' || alp=='U')
	    {
	    	cout<<alp<<"  is a vowel";
		}
		
	else
	{
		cout<<alp<<" is consanant";
		}	
		
		return 0;
}
