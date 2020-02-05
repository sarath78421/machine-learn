#include <iostream.h>
#include <conio.h>
class B;
class A
{
	int a;
	public:
	void get(int x)
	{
		a=x;
	}
	void disp()
	{
		cout<<"A="<<a;
	}
	friend int avg (A,B);
};
class B
{
	int b;
	public:
	void read (int y)
	{
		b=y;
	}
	void print()
	{
		cout<<"\nB="<<b;
	}
	friend int avg(A,B);
};
int avg (A M,B N)
{
	return(M.a+N.b)/2;
}
int main()
{
	clrscr();
	A OBA;
	B OBB;
	int A;
	OBA.get(100);
	OBB.read(200);
	A=avg(OBA,OBB);
	cout<<"average of two numbers="<<A<<"\n";
	OBA.disp();
	OBB.print();
	return 0;
}
