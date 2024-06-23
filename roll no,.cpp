#include <iostream>
using namespace std;
main()
{
 int cp,sp,profit,loss ;
 
 
 cout<<"enter cp sp";
cin>>cp>>sp;
 if(sp>cp)
 {
 	profit=sp-cp;
	 cout<<"profit is"<<profit;
 }
 else  
 {
 	loss=cp-sp;
 	cout<<"loss is"<<loss;
 }

 	
}
