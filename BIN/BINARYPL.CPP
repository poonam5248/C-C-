#include<iostream.h>
#include<conio.h>
class complex
{
private :
	float x;
	float y;
public:
	complex() { }
	complex(float real,float imag)
	{
	x=real;
	y=imag;
	}
	complex operator +(complex c)
	{
	complex temp;
	temp.x = x+c.x;
	temp.y = y+c.y;
	return(temp);
	}
void display()
{
cout<<x<<"+"<<y;
}
};
int main()
{
clrscr();
complex c1,c2,c3;
c1=complex(5.2, 4.8);
c2=complex(2.3, 2.6);
c3=c1+c2;
cout<<"c1= ";c1.display();
cout<<endl<<"c2= ";c2.display();
cout<<endl<<"c3= ";c3.display();
getch();
}
