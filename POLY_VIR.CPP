#include<iostream.h>
#include<conio.h>
class A
{
	public:
	virtual void disp()
	{
		cout<<"Dispaly A";
	}
	virtual void show()
	{
		cout<<"\nShow A";
	}
};
class B:public A
{
	public:
	void disp()
	{
		cout<<"\nDisplay B";
	}
	void show()
	{
		cout<<"\nShow B";
	}
};
void main()
{
	A *p,a1;
	B b1;
	clrscr();
	p = &a1;
	p->disp();
	p->show();
	p = &b1;
	p->disp();
	p->show();
	getch();
}