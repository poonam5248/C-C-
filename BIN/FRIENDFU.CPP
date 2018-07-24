#include<iostream.h>
#include<conio.h>
class abc
{
int a,b;
public:
void get()
{
cout<<"Enter the value of a= ";
cin>>a;
cout<<"Enter the value of b= ";
cin>>b;
}
friend k(abc s);
};
k(abc s)
{
return s.a+s.b;
}
void main()
{
abc s1;
clrscr();
s1.get();
cout<<"Value of c= "<<k(s1);
getch();
}