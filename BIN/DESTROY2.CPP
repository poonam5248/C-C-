#include<iostream.h>
#include<conio.h>
int i=0;
class alp
{
public:
alp()
{
i++;
cout<<"No. of object created"<<endl;
}
~alp()
{
cout<<"No. of object destroyed"<<endl;
i--;
}
};
void main()
{
clrscr();
alp a1,a2,a3,a4;
cout<<"\n Enter the block 1";
cout<<"\n Enter the block 2"<<endl;
getch();
}