#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s;
	clrscr();
	cout<<"Enter String:";
	cin.get(s);
	while(s != '\n')
	{
		cout.put(s);
		cin.get(s);
	}
	getch();
}