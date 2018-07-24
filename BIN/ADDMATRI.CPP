#include<iostream.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j;
clrscr();
cout<<"Enter the matrix (a)= "<<endl;
for(i=0;i<=2;i++)
{
cout<<endl;
for(j=0;j<=2;j++)
{
cin>>a[i][j];
}
}

cout<<endl<<"Enter the matrix (b)= "<<endl;
for(i=0;i<=2;i++)
{
cout<<endl;
for(j=0;j<=2;j++)
{
cin>>b[i][j];
}
}
cout<<endl<<"Value of a in matrix form is= "<<endl;
for(i=0;i<=2;i++)
{
cout<<endl;
for(j=0;j<=2;j++)
{
cout<<"\t"<<a[i][j];
}
cout<<endl;
}
cout<<endl<<"Value of b in matrix form is= "<<endl;
for(i=0;i<=2;i++)
{
cout<<endl;
for(j=0;j<=2;j++)
{
cout<<"\t"<<b[i][j];
}
cout<<endl;
}
cout<<endl<<"The addition of two matrices is = "<<endl;
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
c[i][j]=a[i][j]+b[i][j];
cout<<c[i][j]<<"\t";
}
cout<<endl;
}
getch();
}
