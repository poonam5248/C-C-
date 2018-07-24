#include<stdio.h>
#include<conio.h>
void main()
{
int Hindi,English,Maths,Physics,Chemistry,Total,Percentage;
clrscr();
printf("Enter the marks of Hindi= ");
scanf("%d",&Hindi);
printf("Enter the marks of English= ");
scanf("%d",&English);
printf("Enter the marks of Maths= ");
scanf("%d",&Maths);
printf("Enter the marks of Physics= ");
scanf("%d",&Physics);
printf("Enter the marks of Chemistry= ");
scanf("%d",&Chemistry);
Total=Hindi+English+Maths+Physics+Chemistry;
printf("Total Marks=%d\n",Total);
Percentage=Total/5;
printf("Percentage=%d\n",Percentage);
if(Percentage>=85)
printf("The student got Merit");
else
if(Percentage<85&&Percentage>=75)
printf("The student got Ist position");
else
if(Percentage<75&&Percentage>=65)
printf("The student got IInd position");
else
if(Percentage<65&&Percentage>=55)
printf("The student got IIIrd position");
else
if(Percentage<55&&Percentage>=45)
printf("The student is Pass");
else
if(Percentage<45)
printf("The student is Fail");
getch();
}