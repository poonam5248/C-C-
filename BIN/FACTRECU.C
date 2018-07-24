#include<stdio.h>
#include<conio.h>
void main()
{
int n,f;
clrscr();
printf("Enter the value of n= ");
scanf("%d",&n);
f=k(n);
printf("Fact=%d",f);
getch();
}
int k(int x)
{
if(x==0)
{
return(1)
}
else
{
return(x*k(x-1))
}
}
