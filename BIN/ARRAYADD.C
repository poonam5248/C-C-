#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[5],i;
clrscr();
printf("\nEnter the value of a=\n ");
for(i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the value of b=\n ");
for(i=0;i<=4;i++)
{
scanf("%d",&b[i]);
}
printf("Value of c=\n");
for(i=0;i<=4;i++)
{
c[i]=a[i]+b[i];
printf("%d\n",c[i]);
}
getch();
}