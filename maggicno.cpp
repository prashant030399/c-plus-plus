#include <iostream>
#include <math.h>
using namespace std;
main()
{
	int a,b,c,ch;
	string z;
	do
	{
		cout<<"1add 2sub 3mul";
	
		cin>>ch;
		cin>>a>>b;
		if(ch==1)
		{
			c=a+b;
			cout<<c;
		}
			if(ch==2)
		{
			c=a-b;
			cout<<c;
		}
			if(ch==3)
		{
			c=a*b;
			cout<<c;
		}
		
		
		cout<<"press y to continue & n to exit";
		cin>>z;
		
	}	while(z!="n");
		
		

		
	



}


