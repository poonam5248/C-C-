#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,sum1=0,sum2=0,total,ascii,per,len;
char boy[20],girl[20];
clrscr();
textcolor(GREEN);
cprintf("Enter the name of boy\n");
gets(boy);
textcolor(BLUE);
cprintf("Enter the name of girl\n");
gets(girl);
len=strlen(boy);
for(i=0;i<len;i++)
{
ascii=boy[i];
sum1=sum1+ascii;
}
len=strlen(girl);

for(i=0;i<=len;i++)
{
ascii=girl[i];
sum2=ascii+sum2;
}
total=sum1+sum2;
per=total%100;
textcolor(RED);
cprintf("love calculator percentage=%d",per);
cprintf("%");
getch();
}
