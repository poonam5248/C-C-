#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter any number=");
scanf("%d",&n);
for(i=2;i<=n;i++)
{
if(n%i==0)
{
break;
}
}
if(n==i)
{
printf("Prime number");
}
else
printf("Not prime number");
getch();
}
