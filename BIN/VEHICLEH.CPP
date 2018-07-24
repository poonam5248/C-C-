#include<iostream.h>
#include<conio.h>
class vehicle
{
public:
vehicle()
{
cout<<"This is vehicle\n";
}
};
class fare
{
public: fare()
{
cout<<"Fare of vehicle\n";
}
};
class car: public vehicle
{
};
class bus: public vehicle, public fare
{
};
int main()
{
clrscr();
bus obj2;
return 0;
}