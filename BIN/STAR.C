#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l=0;
clrscr();
for(i=1;i<=5;i++)
{
for(k=5;k>=i;k--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
l++;
printf(" *",l);
}
printf("\n");
}
getch();
}