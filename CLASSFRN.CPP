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
	friend int BIG (A,B);
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
	friend int BIG(A,B);
};
int BIG (A M,B N)
{
	if(M.a>N.b)
		return (M.a);
	else
		return (N.b);
}
int main()
{
	clrscr();
	A OBA;
	B OBB;
	int R;
	OBA.get(100);
	OBB.read(200);
	R=BIG(OBA,OBB);
	cout<<"bigger value="<<R<<"\n"<<"among\n";
	OBA.disp();
	OBB.print();
	return 0;
}
