#include<iostream.h>
#include<conio.h>
void main()
{
int i,j,a[10],num,temp;
clrscr();
cout<<"Enter the value of num= ";
cin>>num;
cout<<"Enter the values of a= ";
for(i=0;i<num;i++)
{
cin>>a[i];
}
for(i=0;i<num;i++)
{
for(j=0;j<(num-i-1);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
cout<<"Sorted array is= "<<endl;
for(i=0;i<num;i++)
{
cout<<a[i]<<endl;
}
getch();
}