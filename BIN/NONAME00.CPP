#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<"Enter the value of a= ";
cin>>a;
for(b=1;b<=10;b++)
{
c=a*b;
cout<<a<<"*"<<b<<"="<<c<<endl;
}
getch();
}