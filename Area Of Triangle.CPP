#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	clrscr();
	cout<<"Enter Three Sides Of Triangle:";
	cin>>a>>b>>c;
	float s=(float)(a+b+c)/2;
	float area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area Is:"<<area;
	getch();
}


