#include<iostream.h>
#include<conio.h>
class abc
{
int a,b;
public:
void get()
{
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
}
friend k(abc s);
};
k(abc s)
{

return s.a+s.b;
}
void main()
{
abc s1;
clrscr();
s1.get();
cout<<"Value of c is= "<<k(s1);
getch();
}