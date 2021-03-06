/*radix sort*/
#include<stdio.h>
#include<math.h>
#define MAX 5
/*function prototypes*/
void radixsort(int NUM[MAX],int limit);
void radix(int NUM[MAX],int size,int maxdigit);
void main()
{
int NUM[MAX],i=0;
clrscr();
puts("\n\t\t-: PROGRAM TO DEMONSTRATE RADIX SORT:-\n");
for(i=0;i<MAX;i++)
{
printf("\t\tEnter NUMBER [%d]= ",i+1);
scanf("%d",&NUM[i]);
}
radixsort(NUM,MAX);
puts("\n\tSORTED LIST IS:- ");
printf("\t\t");
for(i=0;i<MAX;i++)
printf("%d,NUM[i]");
getch();
}
void radixsort(int NUM[MAX],int limit)
{
int ndigit=0;
maxdigit=0;
int val=0,i=0;
for(i=0;i<limit;i++)
{
val=NUM[i];
while(val !=0)
{
val=val/10;
ndigit=ndigit+1;
}
if(ndigit>maxdigit)
maxdigit=ndigit;
ndigit=0;
}
radix(NUM,limit,maxdigit);
return;
}
void radix(int NUM[MAX],int size,int maxdigit)
{
int div=0,i=0,j=0,radix_i=0,radix_j=0,temp=0,digit=1;
while(digit<=maxdigit)
{
div=pow10(digit) ;
for(i=0;i<size-1;i++)
{
for(j=i+1;j<size;j++)
{
radix_i=NUM[i]%div;
radix_j=NUM[j]%div;
if(radix_i>radix_j)
{
temp=NUM[i];
NUM[i]=NUM[j];
NUM[j]=temp;
}
}
}
digit=digit+1;
}
return;
}



