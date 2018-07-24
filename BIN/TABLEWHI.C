#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the value of a= ");
scanf("%d",&a);
b=1;
while(b<=10)
{
c=a*b;
printf("%d*%d=%d\n",a,b,c);
b++;
}
getch();
}
