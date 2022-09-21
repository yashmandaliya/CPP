#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char *s1="Computer";
	int l1,i;
	clrscr();
	l1 = strlen(s1);
	for(i=0;i<l1;i++)
	{
		cout.write(s1,i);
		cout<<endl;
	}
	for(i=l1;i>0;i--)
	{
		cout.write(s1,i);
		cout<<endl;
	}
	getch();
}

/* 
Output:-
C
Com
Comp
Compu
Comput
Compute
Computer
Compute
Comput
Compu
Comp
Com
Co
C
*/
