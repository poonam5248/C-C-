#include<stdio.h>
#include<conio.h>
void main()
{
int r,c;
clrscr();
for(r=1;r<=5;r++)
{
for(c=1;c<=5;c++)
{
printf("r=%dc=%d\t",r,c);
}
printf("\n");
}
getch();
}