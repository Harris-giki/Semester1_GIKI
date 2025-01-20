# include <iostream>
using namespace std;

double radius(double);
double area(double);

int main()
{
	float r;
	double a;
	
	r = radius(r);
	
	cout<<endl;
	cout<<"The area of the circle is: ";
	cout<<area(r);
}

double radius(double r)
{
	cout<<"Enter the radius of the circle: ";
	cin>>r;
	return r;
}

double area(double r)
{
	double a = 3.14 * r * r;
	return a;
}
