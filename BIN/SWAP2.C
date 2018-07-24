#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the value of a=");
scanf("%d",&a);
printf("Enter the value of b=");
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("Value of a=%d\n",a);
printf("Value of b=%d",b);
getch();
}