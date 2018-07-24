#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter the value of a= ");
scanf("%d",&a);
   for(b=1;b<=10;b++)
   {
c=a*b;
printf("%d*%d=%d\n",a,b,c);
}
getch();
}