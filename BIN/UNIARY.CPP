#include<iostream.h>
#include<conio.h>
class abc
{
public:
int x,y;
void get()
{
cout<<"Enter the value of x= ";
cin>>x;
cout<<"Enter the value of y= ";
cin>>y;
}
void put()
{
cout<<"Value of x= "<<x<<endl;
cout<<"Value of y= "<<y<<endl;
}
void operator -()
{
x=-x;
y=-y;
}
};
void main()
{
abc s;
clrscr();
s.get();
s.put();
-s;
s.put();
getch();
}