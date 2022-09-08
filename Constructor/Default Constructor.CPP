#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	A()
	{
		cout<<"\n Default Constructor";
		a=10;
		b=20;
	}
	void put()
	{
		cout<<"\nA="<<a;
		cout<<"\nB="<<b;
	}
};
void main()
{
	A x;
	clrscr();
	x.put();
	getch();
}
