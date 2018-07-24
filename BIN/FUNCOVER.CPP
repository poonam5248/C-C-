#include<iostream.h>
#include<conio.h>
class abc
{
public:
void sum()
{
cout<<"Hello Poonam"<<endl;
}
void sum(int c)
{
int b;
b=c*c;
cout<<"Value of b= "<<b<<endl;
}
void sum(int d,int e)
{
int f;
f=d+e;
cout<<"Value of f="<<f<<endl;
}
void sum(int p,int r,int t)
{
int si;
si=p*r*t/100;
cout<<"Value of si= "<<si<<endl;
}
};
void main()
{
clrscr();
abc a;
{
a.sum();
}
{
int c;
cout<<"Enter the value of c= ";
cin>>c;
a.sum(c);
}
{
int d,e;
cout<<"Enter the value of d= ";
cin>>d;
cout<<"Enter the value of e= ";
cin>>e;
a.sum(d,e);
}
{
int p,r,t;
cout<<"Enter the value of p= ";
cin>>p;
cout<<"Enter the value of r= ";
cin>>r;
cout<<"Enter the value of t= ";
cin>>t;
a.sum(p,r,t);
}
getch();
}

