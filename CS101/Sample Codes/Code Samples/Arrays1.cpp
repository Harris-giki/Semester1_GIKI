// Demonstrating the const type qualifier.
#include <iostream>

using namespace std;

void tryToModifyArray( const int [] );  // function prototype

int main() {

	int a[] = { 10, 20, 30 };

	tryToModifyArray( a );

	cout << a[ 0 ] << ' ' << a[ 1 ] << ' ' << a[ 2 ] << '\n';
	
	system("pause");

	return 0;  // indicates successful termination
} // end main

// In function tryToModifyArray, "b" cannot be used
// to modify the original array "a" in main.
void tryToModifyArray( const int b[] )
{                                                  
	b[ 0 ] /= 2;
	b[ 1 ] /= 2;
	b[ 2 ] /= 2;
} // end function tryToModifyArray                 
