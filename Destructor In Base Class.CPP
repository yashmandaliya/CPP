#include<iostream.h>
#include<conio.h>
class A
{
	public:
	~A()
	{
		cout<<"\nDefault Constructor";
	}
};
class B:public A
{
	public:
	B()
	{
		cout<<"\nDestructor Is Called";
	}
};
void main()
{
	clrscr();;
	B b1;
	getch();
}
