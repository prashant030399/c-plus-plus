#include <iostream>

using namespace std;
void pallindrom(int a)
{
	int b,r,a1;
	a1=a;
while(a!=0)
{
	b=a%10;
	r=r*10+b;
	a=a/10;
}
if(a==r)
{
	cout<<"pallindrom no";
}
else
{
	cout<<"non pallindrom no"
}
}

