#include<iostream.h>
#include<conio.h>
template <class t>
class sample
{
t x;
t y;
public: void getdata(t a, t b)
{
x=a;
y=b;
}
void display()
{
cout<<x;
cout<<y;
}
};
void main()
{
sample<int>obj;
obj.getdata(5,2);
obj.display();
sample<float>obj;
obj.getdata(5.2,2.5);
obj.display();
getch();
}