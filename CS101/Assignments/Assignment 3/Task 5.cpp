# include <iostream>
using namespace std;

double getLength(double);
double getWidth(double);
double getArea(double, double);
double Displaydata(double);

int main()
{
	double l, w, a;
	
	l = getLength(l);
	w = getWidth(w);
	a = getArea(l,w);
	
	cout<<endl;
	cout<<"The area of the rectangle is: ";
	cout<<Displaydata(a);
	
}

double getLength(double l)
{
	
	cout<<"Enter the length of the rectangle: ";
	cin>>l;
	return l;
}

double getWidth(double w)
{
	
	cout<<"Enter the width of the rectangle: ";
	cin>>w;
	return w;
}

double getArea(double l , double w)
{
	int f = l * w;
	return f;
}

double Displaydata(double a)
{
	return a;
}
