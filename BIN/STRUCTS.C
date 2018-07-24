#include<stdio.h>
#include<conio.h>
struct book
{
char name[3];
float price[3];
int pages[3];
};
void main()
{
int i;
struct book b[3];
clrscr();
printf("Enter the information\n");
for(i=0;i<=2;i++)
{
printf("Enter name of Ist books= ");
scanf("%s",&b[i].name);
printf("Enter the price of Ist book= ");
scanf("%f",&b[i].price);
printf("Enter the pages of Ist book= ");
scanf("%d",&b[i].pages);
}
printf("And this is what you entered\n");
for(i=0;i<=2;i++)
{
printf("Name of Ist book is=%s\n",b[i].name);
printf("Price of Ist book is=%f\n",b[i].price);
printf("Pages of Ist book is=%d\n\n",b[i].pages);
}
for(i=0;i<=2;i++)
{
printf("Enter name of IInd books= ");
scanf("%s",&b[i].name);
printf("Enter the price of IInd book= ");
scanf("%f",&b[i].price);
printf("Enter the pages of IInd book= ");
scanf("%d",&b[i].pages);
}
printf("And this is what you entered\n");
printf("Name of IInd book is=%s\n",b[i].name);
printf("Price of IInd book is=%f\n",b[i].price);
printf("Pages of IInd book is=%d\n\n",b[i].pages);
for(i=0;i<=2;i++)
{
printf("Enter name of IIIrd books= ");
scanf("%s",&b[i].name);
printf("Enter the price of IIIrd book= ");
scanf("%f",&b[i].price);
printf("Enter the pages of IIIrd book= ");
scanf("%d",&b[i].pages);
}
printf("And this is what you entered\n");
printf("Name of IIIrd book is=%s\n",b[i].name);
printf("Price of IIIrd book is=%f\n",b[i].price);
printf("Pages of IIIrd book is=%d\n\n",b[i].pages);
getch();
}

