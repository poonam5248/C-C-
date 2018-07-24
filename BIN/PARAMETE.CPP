#include<iostream.h>
#include<conio.h>
class sum
{
int c;
public:
sum(int a,int b)
{
c=a+b;
cout<<"Value of c= "<<c;
}
};
void main()
{
clrscr();
int a,b;
cout<<"Enter the value of a= ";
cin>>a;
cout<<"Enter the value of b= ";
cin>>b;
sum s1(a,b);
getch();
}
