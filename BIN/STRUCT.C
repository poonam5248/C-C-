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
struct book b,b1,b2;
clrscr();
cout<<"Enter the name ,price, and pages of three books= ";
for(i=0;i<=2;i++)
cin>>name[i]>>price[i]>>pages[i]);
cout<<"The name ,price and pages of three books are\n";
for(i=0;i<=2;i++)
cout<<name[i]<<price[i]<<pages[i]);
getch();
}
