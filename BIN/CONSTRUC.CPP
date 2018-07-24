#include<iostream.h>
#include<conio.h>
class sum
{
public:
sum()
{
cout<<"Hello Poonam "<<endl;
}
sum(int a)
{
int b;
b=a*a;
cout<<"Square of two numbers is= "<<b<<endl;
}
sum(int b,int c)
{
int d;
d=b+c;
cout<<"Value of d= "<<d<<endl;
}
sum(int p,int r,int t)
{
int si;
si=p*r*t/100;
cout<<"Value of si= "<<si<<endl;
}
};
void main()
{
clrscr();
{
cout<<"Hello Poonam"<<endl;
sum s1();
}
{
int a;
cout<<"Enter the value of a= ";
cin>>a;
sum s2(a);
}
{
int b,c;
cout<<"Enter the value of b= ";
cin>>b;
cout<<"Enter the value of c= ";
cin>>c;
sum s3(b,c);
}
{
int p,r,t;
cout<<"Enter the value of p= ";
cin>>p;
cout<<"Enter the value of r= ";
cin>>r;
cout<<"Enter the value of t= ";
cin>>t;
sum s4(p,r,t);
}
getch();
}
