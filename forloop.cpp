#include <iostream>
#include <math.h>
using namespace std;
main()
{
int i,a,b,s=0;
cin>>a;
for(i=pow(a,i)/pow(b,i-1);i<=5;i=i+1)
{
	s = s + pow(a,i)/pow(b,i-1);
}
cout<<s;
}



