#include <iostream>
#include <math.h>
using namespace std;
main()
{
	int n1,n2,i,min,hcf=1;
	cin>>n1>>n2;
	for(i=1;i<=n1;i=i+1)
	{
		if(n1%i==0 && n2%i==0)
		{
			hcf=hcf*i;
			cout<<hcf;
		}
		}
		
	}
