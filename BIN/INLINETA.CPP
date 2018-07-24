#include<iostream.h>
#include<conio.h>
inline int tab(int a)
{
int b,c;
for(b=1;b<=10;b++)
{
c=a*b;
cout<<a<<"*"<<b<<"="<<c<<endl;
}
}
void main()
{
int i;
clrscr();
cout<<"Enter the no.=";
cin>>i;
tab(i);
getch();
}