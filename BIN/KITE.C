#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l,m,n;
clrscr();
for(i=1;i<=5;i++)
{
for(k=5;k>=i;k--)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf(" %d",j);
}
printf("\n");
}
for(l=5;l>=1;l--)
{
for(n=5;n>=l;n--)
{
printf(" ");
}
for(m=1;m<=l;m++)
{
printf(" %d",m);
}
printf("\n");
}
getch();
}