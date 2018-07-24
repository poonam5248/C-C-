#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
a=0;
b=1;
printf("%d\n%d\n",a,b);
for(c=0;c<=89;c++)
{
c=a+b;
printf("%d\n",c);
a=b;
b=c;
}
getch();
}