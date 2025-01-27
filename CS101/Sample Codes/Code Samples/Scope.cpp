#include <iostream>

using namespace std;

void a( void );   // function prototype
void b( void );   // function prototype
void c( void );   // function prototype

int x = 1;      // global variable

int main()
{
	int x = 5;   // local variable to main

	cout << "local x in outer scope of main is " << x << endl;

	{            // start new scope
		int x = 7;

		cout << "local x in inner scope of main is " << x << endl;
	}            // end new scope
	
	cout << "local x in outer scope of main is " << x << endl;

	a();         // a has automatic local x
	b();         // b has static local x
	c();         // c uses global x
	a();         // a reinitializes automatic local x
	b();         // static local x retains its previous value
	c();         // global x also retains its value

	cout << "local x in main is " << x << endl;
	
	return 0;
}

void a( void )
{
	int x = 25;  // initialized each time a is called

	cout << endl << "local x in a is " << x 
		<< " after entering a" << endl;

	++x;
	
	cout << "local x in a is " << x 
		<< " before exiting a" << endl;
}

void b( void )
{
	static int x = 50;  // Static initialization only
						// first time b is called.

	cout << endl << "local static x is " << x 
		<< " on entering b" << endl;

	++x;
	
    cout << "local static x is " << x 
		<< " on exiting b" << endl;
}

void c( void )
{
	cout << endl << "global x is " << x 
		<< " on entering c" << endl;
	
	x *= 10;

	cout << "global x is " << x << " on exiting c" << endl;
}
