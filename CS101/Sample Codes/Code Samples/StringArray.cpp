#include <iostream>

using namespace std;

int main()
{
	char string1[ 20 ], string2[] = "string literal";
	char string3[ 20 ] = "Hello World";
	
	cout << "Enter a string: ";
	cin >> string1;
	
	cout << "string1 is: " << string1
	     << "\nstring2 is: " << string2
	     << "\nstring1 with spaces between characters is:\n";
	     
	for ( int i = 0; string1[ i ] != '\0'; i++ )
		cout << string1[ i ] << ' ';
	
	cout << endl;
	
	for ( int i = 0; string3[ i ] != '\0'; i++ )
		cout << string3[ i ] << ' ';
	
	cout << endl;
	
	cin >> string1;  // reads "there"
	
	cout << "\nstring1 is: " << string1 << endl;
	
	return 0;
}

