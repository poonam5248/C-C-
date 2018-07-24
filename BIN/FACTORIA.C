#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,n,i;
clrscr();
printf("Enter any number= ");
scanf("%d",&n);
i=n;
while(i>=1)
{
a=a*i;
i--;
}
printf("%d",a);
getch();
}
