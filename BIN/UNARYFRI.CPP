#include<iostream.h>
#include<conio.h>
class PAN
{
private:
	int p;
	int a;
	int n;
public:
	void getdata(int x,int y,int z)
	{
	p=x;
	a=y;
	n=z;
	}
	void display()
	{
	cout<<"p: "<<p<<endl<<endl;
	cout<<"a: "<<a<<endl<<endl;
	cout<<"n: "<<n<<endl<<endl;
	}
	friend void operator -(PAN &q)
	{
	q.p=-q.p;
	q.a=-q.a;
	q.n=-q.n;
	}
	};
	void main()
	{
	clrscr();
	PAN l;
	l.getdata(52,-100,48);
	l.display();
	-l;
	l.display();
	getch();
	}