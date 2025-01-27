# include <iostream>
# include <conio.h>
using namespace std;
int main()
{
	char dir='a';
	int x=10, y=10;
	
	cout<<endl<<"Press Enter to exit"<<endl;
	
	while( dir != '\r')
	{
		cout<<endl<<"Your location is "<<x<<" , "<<y<<endl;
		cout<<"Press (n,s,e,w) to move:  ";
		
		dir = getche( );
		
		if( dir=='n')
		y++;
		
		else if ( dir=='s')
		y--;
		
		else if( dir=='e')
		x++;
		
		else if( dir=='w')
		x--;
		
	}
	
	return 0;
}
