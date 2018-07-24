#include<iostream.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,sum=0;
clrscr();
cout<<"Enter the matrix= "<<endl;
for(i=0;i<=2;i++)
{
cout<<endl;
for(j=0;j<=2;j++)
{
cin>>a[i][j];
}
}
cout<<"The matrix you entered is= ";
for(i=0;i<=2;i++)
{
cout<<endl;
for(j=0;j<=2;j++)
{
cout<<"\t"<<a[i][j];
}
}
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
if(i==j)
sum=sum+a[i][j];
}
}
cout<<endl<<"Sum of digonals= "<<sum;
getch();
}
