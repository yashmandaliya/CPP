#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	A()
	{
		cout<<"\nDefault Constructor";
		a=0;
		b=0;
	}
	A(int x,int y)
	{
		cout<<"\nParameterized Constructor";
		a=x;
		b=y;
	}
	void put()
	{
		cout<<"\nA="<<a;
		cout<<"\nB="<<b;
	}
};
void main()
{
	int x,y;
	clrscr();
	A a1;
	a1 .put();
	A a2(20,30);
	a2.put();
	getch();
}