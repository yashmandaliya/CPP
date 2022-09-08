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
		a=x;b=y;
	}
	A(A & x)
	{
		cout<<"\nCopy Constructor";
		a=x.a;
		b=x.b;
	}
	void put()
	{
		cout<<"\nA="<<a;
		cout<<"\nB="<<b;
	}
};
void main()
{
	clrscr();
	// Default Construcor
	A a1;
	a1.put();
	// Parameterized Constructor
	A a2(10,20);
	a2.put();
	// Copy Constructor
	A a3=a1;
	a3.put();
	// Default Constructor
	A a4;
	a4.put();
	getch();
}