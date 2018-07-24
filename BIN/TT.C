#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the value of a= ");
scanf("%d",&a);
k(a);
getch();
}
k(int x)
{
int y,z;
for(y=1;y<=10;y++)
{
z=x*y;
printf("%d*%d=%d\n",x,y,z);
//cout<<x<<"*"<<y<<"="<<z;
}
}
