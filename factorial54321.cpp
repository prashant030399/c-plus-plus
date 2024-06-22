#include <iostream>
#include <math.h>
using namespace std;
main()
{
	int i,j,c=0,c1=0,a,b;
	cin>>a>>b;
for(i=a;i<=b;i++)
	{
			for(j=1;j<=i;j++)
			{
				if(i%j==0)
				{
					c=c+1;
				}	
			}
			if(c==2)
			{
			c1=c1+i;
			}
			c=0;
	
		}
		
		cout<<c1;
		c1=0;
			
		
	}
		
				

