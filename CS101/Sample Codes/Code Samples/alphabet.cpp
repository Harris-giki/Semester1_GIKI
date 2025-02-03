# include <iostream>
using namespace std;

void alphabet (char);

int main()
{
	char ch;
	
	cout<<"Enter a character: ";
	cin>>ch;
	
	cout<<endl;
	alphabet(ch);
    
    return 0;
}


void alphabet (char ch)
{
	if( ch>='a' && ch<= 'z' || ch>='A' && ch<='Z')
	{
		cout<<ch<<" is a alphabet";
	}
	
	else
	{
		cout<<"NOT AN ALPHABET";
	}
}
