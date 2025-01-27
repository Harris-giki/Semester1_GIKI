#include <iostream>

using namespace std;

void display(int m[]); //function prototype

int main()
{
	int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
	
	cout << "\nThe numbers are: ";
	for ( int i = 0; i < 10; i++ )
		cout << n[ i ] << "  ";
	cout << endl;

	int x[] = {4, 5, 6};
	
	int y[6] = {19, 20, 3};
	
	int mark[5] = {19, 10, 8, 17, 9};
	
	cout << "\nThe numbers are: ";
	for ( int i = 0; i < 5; i++ )
		cout << mark[ i ] << "  ";
	cout << endl;

	// change 4th element to 9
	mark[3] = 9;
	
	// take input from the user
	cout << "\nPlease enetr 5 numbers: ";
	for ( int i = 0; i < 5; i++ )
		cin >> mark[ i ];
	
	// print the values of user entered numbers
	cout << "\nYou entered following 5 numbers: ";
	for ( int i = 0; i < 5; i++ )
		cout << mark[ i ] << "  ";
	cout << endl;
	
	// print first element of the array
	cout << mark[0];
	
	// Array index out of bound (Unexpected Result)
	cout << mark[9];
	
	
	// call display function
    // pass array as argument
    display(mark, 5);
	
	return 0;
}

// declare function to display marks
// take a 1d array as parameter
void display(int m[], int size) {
    cout << "\nDisplaying marks:\n";

    // display array elements    
    for (int i = 0; i < size; ++i) {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
}
