#include<iostream.h>
#include<conio.h>
inline int max(int x,int y)
{
return (x>y)?x:y;
}
void main()
{
int x,y,i;
clrscr();
for(i=0;i<=2;i++)
{
cout<<"Enter the value of x= ";
cin>>x;
cout<<"Enter the value of y= ";
cin>>y;
cout<<"Larger number is= "<<max(x,y)<<endl;
}
getch();
}
