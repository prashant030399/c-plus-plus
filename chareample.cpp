#include <iostream>
using namespace std;
main()
{
	char c;
	cout<<"enter ";
	cin>>c;
	
	if(c>=65 && c<=90)
	{
		cout<<"upper character ";
	}

	else if(c>=97 && c<=122)
		{
		cout<<"lower character ";
	}

else if(c>=48 && c<=57)
	{
		cout<<"number ";
	}
	else
	{
		cout<<"symbol";
	}


	
	
	

	
}
