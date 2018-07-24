#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],b[3][3],c[3][3],i,j;
clrscr();
printf("Enter the first matrix = ");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
printf("\nEnter the second matrix = ");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&b[i][j]);
printf("\n The first matrix is \n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
}
printf("\n The second matrix is \n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",b[i][j]);
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
c[i][j]=a[i][j]+b[i][j];
printf("\nThe addition of two matrix is \n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",c[i][j]);

}
return 0;

getch();
}