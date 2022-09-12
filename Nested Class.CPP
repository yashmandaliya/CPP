#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
		void getA()
		{
			cout<<"Enter A :";
			cin>>a;
		}
		void putA()
		{
			cout<<"A="<<a;
		}
};
class B
{
	A a1;
	int b;
	public:
		void getB()
		{
			a1.getA();
			cout<<"Enter B:";
			cin>>b;
		}
		void putB()
		{
			a1.putA();
			cout<<"\nB="<<b;
		}
};
void main()
{
	B b1;
	clrscr();
	b1.getB();
	b1.putB();
	getch();
}

