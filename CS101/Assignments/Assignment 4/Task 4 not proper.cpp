#include <iostream>
using namespace std;
int size=5;
int highbreak(int arr[5])
	{ int max,max2;
		max=arr[0];
		for(int i=0; i<size; i++)
		{ if(max<arr[i])
		max=arr[i];
			}
	max2=arr[0];
		for(int i=0; i<size; i++)
		{ if(max2<arr[i]&&arr[i]!=max)
		max2=arr[i];
			}
		int newarray[6];
			for(int i=0,j=0;i<6;j++,i++)
		{
			if(arr[i]==max)
			{ newarray[j]=max2;
			newarray[++j]=max-max2;
			continue;
		}
		newarray[j]=arr[i];
			}
		for(int i=0, j=0; i<6; j++ , i++)
		cout<<newarray[i]<<" ";
		}
		
	int main()
		{ int arr[5]={1,8,5,2,3};
		for(int i=0; i<5; i++)
		cout<<arr[i]<<" ";
		cout<<endl;
		highbreak(arr);
		return 0;
		}
