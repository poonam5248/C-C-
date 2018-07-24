#include<iostream.h>
#include<conio.h>
class sum
{
int x;
public:
sum(int a)
{
x=a;
}
sum(sum &s)
{
cout<<"Value of copied variable is= "<<s.x;
}
};
void main()
{
clrscr();
int z;
cout<<"Enter the value of z= ";
cin>>z;
sum s1(z);
sum s2(s1);
getch();
}
