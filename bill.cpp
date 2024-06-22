#include <iostream>
using namespace std;
main()
{
	int ch;
float r,l,b,b1,h,area;
cout<<"1areacircle 2arearectangle 3areatriangle";
cin>>ch;

switch (ch)
{

	
		case 1:
			cin>>r;
		area=3.14 *r*r;
		cout<<"areais "<<area;
	
		break;
			case 2:
				cin>>l>>b;
		area=l*b;
			cout<<"areais "<<area;
		break;
			case 3:
				cin>>b1>>h;
	area=0.5*b1*h;
	cout<<"areais "<<area;
		break;
		
		default:
			break;
			
			
		}
			
		
}
