#include <iostream>
using namespace std;
main()
{
 int rollno, p,c,ca,t,div ;
 float per;
 char name ;
 
 cout<<"enter rollno ,name , phy_che_ca_marks,";
cin>>rollno>>name>>p>>c>>ca;
t=p+c+ca;
per=t/3;

 if(per>=80 )
 {
 	cout<<" first division ";
 }
 else if(per<80 && per>=60)  
 {
 	cout<<"second division";
 	
 }
 else if(per<60 && per>=40)  
 {
 	cout<<"third division";
 }
 else
 {
 	cout<<"fail";
 	
 }
 
 cout<<t;
 cout<<per;
 cout<<div;
 
 	
}
