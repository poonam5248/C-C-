#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("Enter the age of person= ");
scanf("%d",&age);
if(age>=18)
printf("The person is eligible for vote");
else
printf("The person is not eligible for vote");
getch();
}