#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,sum=0;
clrscr();
printf("Enter the matrix \n");
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<=2;i++)
{
printf("\n");
for(j=0;j<=2;j++)
{
printf("%d\t",a[i][j]);
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
if(i==j)
sum=sum+a[i][j];
}
}
printf("sum=%d",sum);
getch();
}