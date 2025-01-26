#include <iostream>

using std::cout;
using std::endl;

int main()
{
	//Implicit Casting
	short a=2000;
	int b;
	long c;
	b = a;
	c = b;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	
	//Explicit Casting
	double x = 10.3;
	int y;
	y = int (x);
	cout << "y = " << y << endl;
	
	int d = 3, e = 4;
	float f = (float(d) / float(e));
	cout << "f = " << f << endl;
	
	double z = 1.2;
  	// Explicit conversion from double to int
    int sum = int(z) + 1;
    cout << "Sum = " << sum << endl;
    
    float res = float(10)/ 4;        // This is also correct  (float)10 / 4;
    cout << "res = " << res << endl;
    
    
   	float output;
   	float f1=15.5, f2=2;
   	output = (int)f1/(int)f2;
   	cout << output << endl;
   	output = (int)(f1/f2);
   	cout << output << endl;
   	output = f1/f2;
   	cout << output;
	
	return 0;
}
