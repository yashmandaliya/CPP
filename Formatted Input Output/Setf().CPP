#include<iostream.h>
#include<conio.h>
void main()
{
	float a=10.232;
	clrscr();
	cout.width(a);
	cout.setf(ios::showpos);
	cout.setf(ios::internal,ios::adjustfield);
	cout.fill('*');
	cout<<a;
	getch();
}