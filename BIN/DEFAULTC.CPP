#include<iostream.h>
#include<conio.h>
class sum
{
int a,b,c;
public:
sum()
{
cout<<"Enter the value of a= ";
cin>>a;
cout<<"Enter the value of b= ";
cin>>b;
c=a+b;
cout<<"Value of c= "<<c;
}
};
void main()
{
clrscr();
sum s1;
getch();
}
