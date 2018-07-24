#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
printf("Enter the value of i=");
scanf("%d",&i);
if(i%2==0)
printf("The number is even");
else
printf("The number is odd");
getch();
}