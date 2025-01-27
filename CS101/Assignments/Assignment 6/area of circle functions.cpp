# include <iostream>
using namespace std;

float area(int *);

int main()
{
	int radius;
	cout<<"Enter the radius of the circle: ";
	cin>>radius;
	
	cout<<area(& radius);
		
}

float area(int *r)
{
	float a = *r * *r * 3.14;
	return a;
}
