//6. vowel or consanant

# include <iostream>
using namespace std;
int main()
{
	char alpha;
	
	cout<<"Enter a character: ";
	cin>>alpha;
	
	switch(alpha)
	{
		case ('a'):
			cout<<endl<<"It is a vowel";
			break;

		case ('e'):
			cout<<"It is a vowel";
			break;
			
		case ('i'):
			cout<<"It is a vowel";
			break;
			
		case ('o'):
			cout<<"It is a vowel";
			break;
			
		case ('u'):
			cout<<endl<<"It is a vowel";
			break;
			
		default:
		cout<<endl<<"It is a consanat"<<endl;													
	}
	
	
	return 0;
}
