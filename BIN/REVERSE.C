#include<stdio.h>
#include<conio.h>
void main()
{
int num,d1,d2,d3,reverse;
clrscr();
printf("Enter the value of num= ");
scanf("%d",&num);
d1=num%100%10*100;
d2=num%100/10*10;
d3=num/100;
reverse=d1+d2+d3;
printf("reverse number=%d",reverse);
getch();

}