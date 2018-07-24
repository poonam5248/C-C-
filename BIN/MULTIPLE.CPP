#include<iostream.h>

void test(int x)
{
try
{
if(x==1)throw x;
else
if(x==0) throw 'x';
}
catch(char c)
{
cout<<"Character Caught\n";
}
catch(int m)
{
cout<<"Integer Caught\n";
}
}
int main()
{
cout<<"x==1\n";
test(1);
cout<<"x==0\n";
test(0);
return 0'
}
