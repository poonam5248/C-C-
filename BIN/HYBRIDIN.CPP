#include<iostream.h>
#include<conio.h>
class stu
{
private:
char name[20];
int std;
public:
void get()
{
cout<<"Enter the name= ";
cin>>name;
cout<<"Enter the class= ";
cin>>std;
}
void put()
{
cout<<"Name is "<<name<<endl;
cout<<"Class is "<<std<<endl;
}
};
class marks:public stu
{
public:
int m1,m2,m3;
void get1()
{
cout<<"Enter the marks of m1= ";
cin>>m1;
cout<<"Enter the marks of m2= ";
cin>>m2;
cout<<"Enter the marks of m3= ";
cin>>m3;
}
void put1()
{
cout<<"Marks of m1= "<<m1<<endl;
cout<<"Marks of m2= "<<m2<<endl;
cout<<"Marks of m3= "<<m3<<endl;
}
};
class sports
{
private:
char name[20];
int sno;
public:
void get2()
{
cout<<"Enter the name of sport= ";
cin>>name;
cout<<"Enter the number= ";
cin>>sno;
}
void put2()
{
cout<<"Name of sport is= "<<name<<endl;
cout<<"Number of sport is= "<<sno<<endl;
}
};
class res:public sports,public marks
{
private:
int total,per;
public:
void get3()
{
total=m1+m2+m3;
per=total/3;
cout<<"Total marks= "<<total<<endl;
cout<<"Percentage = "<<per<<"%"<<endl;
}
};
void main()
{
clrscr();
res s;
s.get();
s.put();
s.get1();
s.put1();
s.get2();
s.put2();
s.get3();
getch();
}

