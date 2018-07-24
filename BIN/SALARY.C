#include<stdio.h>
#include<conio.h>
void main()
{
long int salary,hra,ta,da,total;
clrscr();
printf("Enter the salary of an employee= ");
scanf("%ld",&salary);
if(salary<=4000)
{
ta=salary*4/100 ;
da=salary*4/100 ;
hra=salary*4/100 ;
total=ta+hra+da+salary;
printf("%ld\n",ta);
printf("%ld\n",da);
printf("%ld\n",hra);
printf("%ld\n",total);
}
else
if(salary>4000&&salary<=6000)
{
ta=salary*6/100 ;
da=salary*6/100 ;
hra=salary*6/100 ;
total=ta+hra+da+salary;
printf("%ld\n",ta);
printf("%ld\n",da);
printf("%ld\n",hra);
printf("%ld\n",total);
}
else
if(salary>6000&&salary<=8000)
{
ta=salary*8/100 ;
da=salary*8/100 ;
hra=salary*8/100 ;
total=ta+hra+da+salary;
printf("%ld\n",ta);
printf("%ld\n",da);
printf("%ld\n",hra);
printf("%ld\n",total);
}
else
if(salary>8000)
{
ta=salary*10/100 ;
da=salary*10/100 ;
hra=salary*10/100 ;
total=ta+hra+da+salary;
printf("%ld\n",ta);
printf("%ld\n",da);
printf("%ld\n",hra);
printf("%ld\n",total);
}
getch();
}