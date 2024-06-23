#include <iostream>
#include <math.h>
using namespace std;
main()
{
int n,b,a;
cin>>n;
while(n!=0)
{
	b=n%10;
	n=n/10;	
}
a=n%10;
cout<<a+b;


}

