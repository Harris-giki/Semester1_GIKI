// Cube a variable using call-by-reference 
// with a pointer argument

#include <iostream>

using namespace std;

void cubeByReference( int * );   

int main() {
	
    int number = 5;

    cout << "The original value of number is " << number;

	cubeByReference( &number );
	
	cout << "\nThe new value of number is " << number << endl << endl << endl;
	
	int *ptr;
	int a[10] = {23, 2, 56, 65, 78, 68, 348, 488, 45, 87};
	ptr = a;
	
	for (int i=0; i<10; i++)
	{
		cout << ptr[i]++ << "  " << endl;  // using [] operator with a pointer
		
		//cout << *(ptr+i) << "  " << endl;    // incrementing pointer OR
		cout << *ptr++ << "  " << endl;    // incrementing pointer
	}

    return 0;
}

void cubeByReference( int *nPtr )
{
	*nPtr = *nPtr * *nPtr * *nPtr;  // cube number in main
}

//Array version
void print_array_v1(int a[], int len) {
	for(int i=0; i<len; i++) 
		cout << "[" << i << "] = " << a[i] << endl;
}

//Pointer version
void print_array_v2(int *a, int len) {
	for (int i=0; i<len; i++) 
		cout << "[" << i << "] = " << *a++ << endl;
}


