#include<iostream.h>
#include<conio.h>
void main()
{
int a[3][4][2],i,j,k;
clrscr();
cout<<"Enter the matrix= "<<endl;
for(k=0;k<=2;k++)
{
for(i=0;i<=3;i++)
{
for(j=0;j<=1;j++)
{
cin>>a[k][i][j];
}
}
}
cout<<"The matrix you entered is= ";
for(k=0;k<=2;k++)
{
cout<<endl;
for(i=0;i<=3;i++)
{
cout<<endl;
for(j=0;j<=1;j++)
{
cout<<"\t"<<a[k][i][j];
}
cout<<endl;
}
}
getch();
}
