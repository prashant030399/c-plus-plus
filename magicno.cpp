#include <iostream>
#include <math.h>
using namespace std;
main()
{
	int n,n1,b,c,r=0,s=0,s1;
	cin>>n;
	n1=n;

	while(n!=0)
	{
		b=n%10;
		s=s+b;
		n=n/10;
	}
	s1=s;
	while(s!=0)
	{
		c=s%10;
		r=r*10+c;
		s=s/10;
}
	    if(n1==s1*r)   
		{
			cout<<"magic no";
	}

}



