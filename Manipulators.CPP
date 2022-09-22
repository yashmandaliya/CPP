#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
	int a;
	clrscr();
	cout<<"Enter A:";
	cin>>a;
	cout<<setw(a);
	cout<<setfill('*');
	cout<<setiosflags(ios::internal);
	cout<<setiosflags(ios::showpos);
	cout<<a;
	getch();
}