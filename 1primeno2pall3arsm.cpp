#include <iostream> 
#include <math.h>
using namespace std;
main()
{
	 int x,y,i1,i,s=0,b;
	 cin>>x>>y;
	 for(i=x;i<=y;i++)
	 {
	 	i1=i;
	 	while(i!=0)
	 	{
	 		b=i%10;
	 		s=s+pow(b,3);
	 		i=i/10;
		 }
		 if(s==i1)
		 {
		 	cout<<i1<<"\n";
		 }
		 i=i1;
		 s=0;
	 }
			 
}






			 
	 
	 

	 


