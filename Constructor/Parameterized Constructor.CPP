#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
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
	A b(25,84);
	b.put();
	getch();
}