#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter the value of ch=");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("The alphabet entered is a vowel ");
else
printf("The alphabet entered is consonant");
getch();
}