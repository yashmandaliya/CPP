#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
	char *name;
	int len;
	public:
	string()
	{
		len=0;
		name = new char[len+1];
	}
	string(char *s)
	{
		len = strlen(s);
		name = new char[len +1];
		strcpy(name,s);
	}
	void put()
	{
		cout<<"\nName:"<<name;
	}
	friend string join(string s1,string s2);
};
string join(string s1,string s2)
{
	int len;
	string s3;
	s3.len = s1.len + s2.len;
	s3.name = new char[len+1];
	strcpy(s3.name,s1.name);
	strcat(s3.name,s2.name);
	return s3;
}
void main()
{
	clrscr();
	char s1[20],s2[20];
	cout<<"Enter First Name:";
	cin>>s1;
	cout<<"Enter Last Name:";
	cin>>s2;
	string a1(s1),a2(s2),a3;
	a3 = join(s1,s2);
	a1.put();
	a2.put();
	a3.put();
	getch();
}
