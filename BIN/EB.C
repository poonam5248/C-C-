#include<stdio.h>
#include<conio.h>
void main()
{
int u,eb;
clrscr();
printf("Enter the value of u= ");
scanf("%d",&u);
if(u<=200)
{
eb=u*0;
printf("Value of eb=%d",eb);
}
if(u>200&&u<=400)
{
eb=u*2;
printf("Value of eb=%d",eb);
}
if(u>400&&u<=600)
{
eb=u*4;
printf("Value of eb=%d",eb);
}
if(u>600&&u<=800)
{
eb=u*6;
printf("Value of eb=%d",eb);
}
if(u>800)
{
eb=u*8;
printf("Value of eb=%d",eb);
}
getch();
}