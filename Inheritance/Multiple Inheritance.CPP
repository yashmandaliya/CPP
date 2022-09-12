#include<iostream.h>
#include<conio.h>
class A
{
	public:
	A()
	{
		cout<<"\nA Constructor Is Called";
	}
};
class B
{
	public:
	B()
	{
		cout<<"\nB Constructor Is Called";
	}
};
class C:public A,public B
{
	public:
	C()
	{
		cout<<"\nC Constructor Is Called";
	}
};
void main()
{
	clrscr();
	C c;
	getch();
}