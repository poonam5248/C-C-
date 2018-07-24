#include<iostream.h>
#include<conio.h>
class employee
{
public:
employee()
{
cout<<"Constructor created"<<endl;
}
~employee()
{
cout<<"Destructor destroyed"<<endl;
}
};
int main(void)
{
clrscr();
employee e1;
employee e2;
getch();
}