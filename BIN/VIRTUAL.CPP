#include<iostream.h>
#include<conio.h>
class Base
{
public:
void display()
{
cout<<"\n Display base ";
}
virtual void show()
{
cout<<"\n Show base";
}
};
class Derived: public Base
{
void display()
{
cout<<"\n Display derived ";
}
void show()
{
cout<<"\n Show derived";
}
};
int main()
{
clrscr();
Base B;
Derived D;
Base *bptr;
cout<<"\n bptr points to Base\n";
bptr=&B;
bptr->display();
bptr->show();
cout<<"\n \n bptr points to Derived\n ";
bptr=&D;
bptr->display();
bptr->show();
return 0;
}