#include <iostream>
#include <iomanip>

using namespace std;

void modifyArray( int [], int );  // appears strange
void modifyElement( int );

int main()
{
	const int arraySize = 5;
	int i, a[ arraySize ] = { 0, 1, 2, 3, 4 };
	
	cout << "Effects of passing entire array call-by-reference:" 
		 << "\n\nThe values of the original array are:\n";
		 
	for ( i = 0; i < arraySize; i++ )
		cout << setw( 3 ) << a[ i ];
	
	cout << endl;
	
	// array a passed call-by-reference
	modifyArray( a, arraySize );
	
	cout << "The values of the modified array are:\n";
	
	for ( i = 0; i < arraySize; i++ )
		cout << setw( 3 ) << a[ i ];
	
	cout << "\n\n\n"
		 << "Effects of passing array element call-by-value:"
		 << "\n\nThe value of a[3] is " << a[ 3 ] << '\n';
		 
	modifyElement( a[ 3 ] );
	
	cout << "The value of a[3] is " << a[ 3 ] << endl;

	return 0;
}

// In function modifyArray, "b" points to the original
// array "a" in memory.
void modifyArray( int b[], int sizeOfArray )
{
	for ( int j = 0; j < sizeOfArray; j++ )
		b[ j ] *= 2;
}

// In function modifyElement, "e" is a local copy of
// array element a[ 3 ] passed from main.
void modifyElement( int e )
{
	cout << "Value in modifyElement is " 
		 << ( e *= 2 ) << endl;
}
