#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<"Enter the value of a= ";
cin>>a;
k(a);
getch();
}
k(int x)
{
int y,z;
for(y=1;y<=10;y++)
{
z=x*y;
cout<<x<<"*"<<y<<"="<<z;
}
}
