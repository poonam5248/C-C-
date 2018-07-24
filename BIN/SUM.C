#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,sub,div,mul;
clrscr();
printf("Enter the value of a=");
scanf("%d",&a);
printf("Enter the value of b=");
scanf("%d",&b);
sum=a+b;
printf("Sum=%d\n",sum);
sub=a-b;
printf("Sub=%d\n",sub);
div=a/b;
printf("Div=%d\n",div);
mul=a*b;
printf("Mul=%d",mul);
getch();
}