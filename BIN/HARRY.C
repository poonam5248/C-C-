#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter the number of second left:-");
scanf("%d",&n);
for(i=n;i>0;i--)
{
textcolor(i);
cprintf("Happy birthday in %d sec",i);
delay(1000);
clrscr();
}
for(i=0;i<=10;i++)
{
textcolor(i);
cprintf("HAPPY BIRTHDAY TO U MY SWEET SIS");
delay(1000);
clrscr();
}
getch();
}
