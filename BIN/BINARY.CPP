#include<iostream.h>
#include<conio.h>
class sample
{
private:
int x,y;
public:
void get()
{
cout<<"Enter the value of x= ";
cin>>x;
cout<<"Enter the value of y= ";
cin>>y;
}
sample operator+(sample ee)
{
ee.x=x+ee.x;
ee.y=y+ee.y;
return(ee);
}
void put()
{
cout<<"Sum of two numbers is= "<<x<<"+"<<y;
}
};
void main()
{
sample ex1,ex2,ex3;
clrscr();
ex1.get();
ex2.get();
ex3=ex1+ex2;
ex3.put();
getch();
}