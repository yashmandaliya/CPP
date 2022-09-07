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
void main()
{
	B b1;
	clrscr();
	b1.get();
	b1.put();
	b1.get1();
	b1.put1();
	getch();
}