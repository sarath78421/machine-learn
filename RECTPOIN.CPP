#include<iostream.h>
#include<conio.h>
class rect
{
	int l,b;
	int ar;
	void cal();
	public:
	void get(int x,int y)
	{
		l=x;
		b=y;
	}
	void disp()
	{
		cal();
		cout<<"area="<<ar;
	}
};
void rect::cal()
{
	ar=l*b;
}
void main()
{
	rect obj;
	clrscr();
	int l,b;
	cout<<"enter the l and b";
	cin >>l>>b;
	obj.get(l,b);
	rect *ptr=&obj;
	ptr->disp();
}
