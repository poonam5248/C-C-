#include<iostream.h>
#include<conio.h>

template <class t, class p>
void sum(t x, p y)
{
p result;
result=x+y;
cout<<"Result is= "<<result<<endl;
}
void main()
{
clrscr();
sum(5,10.2);
sum(6.7,8.2);
getch();
}