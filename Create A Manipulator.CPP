#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
ostream & manipulator ( ostream & out)
{
	cout.width(10);
	cout.fill('*');
	cout.setf(ios::showpos);
	cout.setf(ios::internal,ios::adjustfield);
	return(out);
}
int main()
{
	int a=10;
	clrscr();
	cout<<manipulator<<a;
	getch();
	return 0;
}