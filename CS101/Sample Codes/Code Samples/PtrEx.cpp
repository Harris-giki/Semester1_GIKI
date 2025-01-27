#include <iostream>
using namespace std;

int main()
{
	int val = 7;
	
    // * indicates variable is a pointer
    int *myPtr;  // declares a pointer to an int, a pointer of type int *

    int *myPtr1, *myPtr2; // Multiple pointers require multiple asterisks
	
	myPtr = NULL; // can be initialized to 0, NULL, or an address
	myPtr = &val; // myPtr gets address of val
	
	// print value of val
    cout << "val = " << val << endl;

    // print address of var
    cout << "Address of val (&val) = " << &val << endl
         << endl;

    // print pointer myPtr
    cout << "myPtr = " << myPtr << endl << endl;

    // print the content of the address myPtr points to
    cout << "Content of the address pointed to by myPtr (*myPtr) = " << *myPtr << endl;
 
 	*myPtr = 10;

    // print the content of the address myPtr points to
    cout << "Content of the address pointed to by myPtr (*myPtr) = " << *myPtr << endl;

	cout << "\n\nShowing that * and & are inverses of "
		 << "each other.\n&*myPtr = " << &*myPtr
		 << "\n*&myPtr = " << *&myPtr << endl;

	return 0;
}
