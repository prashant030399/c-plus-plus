#include <iostream>
using namespace std;
main()
{
int m1,m2,m3,t,p;
cin>>m1>>m2>>m3;
t=m1+m2+m3;
p = t/3;
p>=75 && p<100 ? cout<<"grade A" : p>=60 && p<75 ? cout<<"grade B " : p>=40 && p<60 ? cout<<"grade C" :cout<<"fail";


}


