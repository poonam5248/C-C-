#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
a=0;
b=1;
printf("%d\n%d\n",a,b);
c=0;
while(c<=89)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
c++;
}
getch();
}