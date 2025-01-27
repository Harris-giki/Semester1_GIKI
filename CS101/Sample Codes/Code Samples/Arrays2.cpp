#include <iostream>
#include <iomanip>

using namespace std;

void modifyArray( int [], int );  // appears strange
void modifyElement( int );

int main() {
	const int arraySize = 5;                 // size of array a
	int a[ arraySize ] = { 0, 1, 2, 3, 4 };  // initialize a

	cout << "Effects of passing entire array by reference:"
		<< "\n\nThe values of the original array are:\n";

	// output original array
	for ( int i = 0; i < arraySize; i++ )
		cout << setw( 3 ) << a[ i ];

	cout << endl;

	// pass array a to modifyArray by reference
	modifyArray( a, arraySize );

	cout << "The values of the modified array are:\n";

	// output modified array
	for ( int j = 0; j < arraySize; j++ )
		cout << setw( 3 ) << a[ j ];

	// output value of a[ 3 ]
	cout << "\n\n\n"
		<< "Effects of passing array element by value:"
		<< "\n\nThe value of a[3] is " << a[ 3 ] << '\n';

	// pass array element a[ 3 ] by value
	modifyElement( a[ 3 ] );

	// output value of a[ 3 ]
	cout << "The value of a[3] is " << a[ 3 ] << endl;
	
	system("pause");

	return 0;
}

// in function modifyArray, "b" points to
// the original array "a" in memory
void modifyArray( int b[], int sizeOfArray )
{
	// multiply each array element by 2
	for ( int k = 0; k < sizeOfArray; k++ )
		b[ k ] *= 2;
} // end function modifyArray

// in function modifyElement, "e" is a local copy of
// array element a[ 3 ] passed from main
void modifyElement( int e )
{
	// multiply parameter by 2
	cout << "Value in modifyElement is "
		<< ( e *= 2 ) << endl;
} // end function modifyElement