# include <iostream>
using namespace std;

char conversion(char);

int main()
{
	char a;
	
	cout<<"Enter an alphabet in uppercase: ";
	cin>>a;
	
	cout<<endl;
	cout<<"The lower is: ";
	cout<<conversion(a);
	
}

char conversion(char a)
{
	switch(a)
	{
		case 'A':
			return 'a';
			break;
		
		case 'B':
			return 'b';
			break;	
		
		case 'C':
			return 'c';
			break;
		
		case 'D':
			return 'e';
			break;
		
		case 'E':
			return 'e';
			break;
		
		case 'F':
			return 'f';
			break;	
			
		case 'G':
			return 'g';
			break;
		
		case 'H':
			return 'h';
			break;
			
		case 'I':
			return 'i';
			break;
		
		case 'J':
			return 'j';
			break;
		
		case 'K':
			return 'k';
			break;
		
		case 'L':
			return 'l';
			break;
		
		case 'M':
			return 'm';
			break;
		
		case 'N':
			return 'n';
			break;
		
		case 'O':
			return 'o';
			break;
		
		case 'P':
			return 'p';
			break;
		
		case 'Q':
			return 'q';
			break;
		
		case 'R':
			return 'r';
			break;
		
		case 'S':
			return 's';
			break;
		
		case 'T':
			return 't';
			break;
		
		case 'U':
			return 'u';
			break;
		
		case 'V':
			return 'v';
			break;
		
		case 'W':
			return 'w';
			break;
		
		case 'X':
			return 'x';
			break;
			
		case 'Y':
			return 'y';
			break;
		
		case 'Z':
			return 'z';
			break;
			
		default:
		    return a;												
	}
}
