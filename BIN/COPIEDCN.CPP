#include<iostream.h>
#include<conio.h>
class sum
{
int x;
public:
sum(int a)
{
x=a;
cout<<x<<endl;
}
sum(sum &s)
{
cout<<s.x;
}
};
void main()
{
clrscr();
sum s1(10);
sum s2(s1);
getch();
}