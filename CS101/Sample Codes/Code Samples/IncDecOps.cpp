#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int x = 7;
    
    cout << "Value of x is " << x << endl;
    
    cout << "Value of x is now" << x++ << endl;

    cout << "Value of x is now " << x << endl;

    cout << "Value of x is now " << ++x << endl;

    cout << "Value of x is now " << x << endl;
    
    int a = 7;
    int b = 8;
    int c = 9;
    
    cout << (a + ++b + c++) << endl;
    
    cout << (a++ * --b);

    return 0;
}
