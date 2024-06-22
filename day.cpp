#include <iostream>
using namespace std;
main()
{
	int m1,m2,m3,t,p;
	cout<<"enter no";
	cin>>m1 >>m2>>m3;
	t=m1 + m2 + m3;
	p=t/3;
	if(p>=75 && p<=100)
	{
		cout<<"grade a";
		
	}
	if(p>=60 && p<=75)
	{
		cout<<"grade b";
	}
		if(p>=40 && p<=60)
	{
		cout<<"grade c";
	}
		if(p<40)
	{
		cout<<"fail";
	}
		
		
		
		
		
	
}
