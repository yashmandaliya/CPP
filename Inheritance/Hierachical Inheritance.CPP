#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	void getA()
	{
		cout<<"Enter A:";
		cin>>a;
	}
	void putA()
	{
		cout<<"\nA="<<a;
	}
};
class B:public A
{
	int b;
	public:
	void getB()
	{
		cout<<"Enter B:";
		cin>>b;
	}
	void putB()
	{
		cout<<"\nB="<<b;
	}
};
class C
{
	int c;
	public:
	void getC()
	{
		cout<<"Enter C:";
		cin>>c;
	}
	void putC()
	{
		cout<<"\nC="<<c;
	}
};
class D:public B,public C
{
	int d;
	public:
	void getD()
	{
		cout<<"Enter D:";
		cin>>d;
	}
	void putD()
	{
		cout<<"\nD="<<d;
	}
};
void main()
{
	D d1;
	clrscr();
	// Input Value
	d1.getA();
	d1.getB();
	d1.getC();
	d1.getD();
	//Print Value
	d1.putA();
	d1.putB();
	d1.putC();
	d1.putD();
	getch();
}