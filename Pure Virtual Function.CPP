#include<iostream.h>
#include<conio.h>
class A
{
	public:
	virtual void display() = 0;
	void show()
	{
		cout<<"\nShow Name";
	}
};
class B:public A
{
	public:
	void display()
	{
		cout<<"\nDisplay name";
	}
	void show()
	{
		cout<<"\nShow Second name";
	}
};
void main()
{
	A *p;
      // A a1;
	B b1;
	clrscr();
	p = &b1;
	p->display();
	p->show();
	getch();
}
