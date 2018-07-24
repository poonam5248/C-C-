#include<stdio.h>
#include<conio.h>
void main()
{
int  num,d1,d2,d3,sum;
clrscr();
printf("Enter the value of num= ");
scanf("%d",&num);
d1=num/100*100;
d2=num%100/10*10;
d3=num/100*1;
sum=d1+d2+d3;
if(sum==num)
printf("The number is palindrome");
else
printf("The number is not palindrome");
				    getch();
}