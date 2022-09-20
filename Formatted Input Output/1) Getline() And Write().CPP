#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s[17];
	clrscr();
	cout<<'Enter Line Of Text:";
	cin.getline(s,17);
	cout<<"\nLine Of text Is;";
	cout.write(s,17);
	getch();
}

/* 
Output:-

Enter Line Of text: Yash Mandaliya
Line Of Text Is:

After Click Alt + F5 In Turbo C

Enter Line Of text: Yash Mandaliya
Line Of Text Is:Yash Mandaliya

*/

