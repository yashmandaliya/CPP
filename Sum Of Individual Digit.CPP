#include<iostream.h>
#include<conio.h>
int digsum(int n)
{
       int sum=0;
       while(n>0 || sum>9)
       {
		if(n==0)
		{
			n=sum;
			sum=0;
		}
		sum += n%10;
		n = (int)n /10;
       }
       return sum;
}
int main()
{
	int n;
	clrscr();
	cout<<"Enter Value:";
	cin>>n;
	cout<<"Individual Sum Upto One Digit:"<<digsum(n);
	getch();
	return 0;
}
