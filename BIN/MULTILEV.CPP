#include<iostream.h>
#include<conio.h>
class sum
{
int a,b,c;
public:
void add()
{
cout<<"Enter the value of a= ";
cin>>a;
cout<<"Enter the value of b= ";
cin>>b;
c=a+b;
cout<<"Sum of two numbers is= "<<c;
}
};
class subtraction: public sum
{
int a,b,c;
public:
void subtract()
{
cout<<"\nEnter the value of a= ";
cin>>a;
cout<<"Enter the value of b= ";
cin>>b;
c=a-b;
cout<<"Subtraction of two numbers = "<<c;
}
};
class multiplication: public subtraction
{
int a,b,c;
public:
void multiply()
{
cout<<"\nEnter the value of a= ";
cin>>a;
cout<<"Enter the value of b= ";
cin>>b;
c=a*b;
cout<<"Multiplication of two numbers is= "<<c<<endl;
}
};
void main()
{
clrscr();
multiplication s1;
s1.add();
s1.subtract();
s1.multiply();
getch();
}

