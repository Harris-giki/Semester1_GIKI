# include <iostream>
using namespace std;
int main()
{
	char letter;
	
	cout<<"ENTER AN ALPHABET: ";
	cin>>letter;
	
	if(letter == 'a'|| letter=='A' || letter=='e'|| letter=='E' || letter=='i'|| letter=='I' 
	|| letter=='O'|| letter=='o' || letter=='u'|| letter=='U')
	
	{
		cout<<endl<<letter<<"  is a vowel"<<endl;
	}
	
	else
	{
		cout<<letter<<" is a consonant"<<endl;
	}
	
	return 0;
}
