#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	void get()
	{
		cout<<"Enter A And B:";
		cin>>a>>b;
	}
	void put()
	{
		cout<<"A:"<<a<<"\tB:"<<b;
	}
};
class B : public A
{
	int c,d;
	public:
	void get1()
	{
		cout<<"\nEnter C And D:";
		cin>>c>>d;
	}
	void put1()
	{
		cout<<"C:"<<c<<"\tD:"<<d;
	}
};
class C : public B
{
	int e,f;
	public:
	void get2()
	{
		cout<<"\nEnter C And D:";
		cin>>e>>f;
	}
	void put2()
	{
		cout<<"E:"<<e<<"\tF:"<<f;
	}
};

void main()
{
	C c1;
	clrscr();
	c1.get();
	c1.put();
	c1.get1();
	c1.put1();
	c1.get2();
	c1.put2();
	getch();
}