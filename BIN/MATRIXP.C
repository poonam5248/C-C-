#include<stdio.h>
#include<conio.h>
void main()
{
int num[3][3],r,c;
clrscr();
for(r=0;r<3;r++)
{
for(c=0;c<3;c++)
{
printf("\n Enter number=")   ;
scanf("%d",&num[r][c]);
}
}
for(r=0;r<3;r++)
{
printf("\n");
for(c=0;c<3;c++)
{
printf("%d\t",num[r][c]);
}
}
getch();

}
