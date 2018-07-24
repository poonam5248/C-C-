#include<stdio.h>
#include<conio.h>
void main()
{
int n,b=0;
clrscr();
printf("Enter any number= ");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
b++;
}
printf("The count of number is =%d",b);

getch();
}
