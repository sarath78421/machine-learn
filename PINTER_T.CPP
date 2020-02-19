#include<iostream.h>
#include<conio.h>
/*
//pointer to object
class CIR
{
	int r;
	float ar;
	void cal();
	public:
	void get(int x)
	{
		r=x;
	}
	void disp()
	{
		cal();
		cout<<"area="<<ar;
	}
};

void CIR::cal()
{
	ar=3.14*r*r;
}
void main()
{
	CIR obj;
	clrscr();
	int n;
	cout<<"enter radius=";
	cin>>n;
	obj.get(n);
	CIR * ptr= &obj;
	ptr->disp();
}
*/

/*
// pointer to member function
class CIR
{
	int r;
	float ar;
	void cal();
	public:
	void get (int x)
	{
		r=x;
	}
	void disp()
	{
		cal();
		cout<<"area="<<ar;
	}
};
 void CIR::cal()
{
		ar=3.14*r*r;
}
void main()
{
	clrscr();
	void(CIR::*ptr)(void)=&CIR::disp;
	CIR obj;
	obj.get(5);
	(obj.*ptr)();
}*/

//pointer to data member

class CIR
{
	friend void main();
	int r;
	float ar;
	void cal();
	public:
	void get(int x)
	{
		r=x;
	}
	void disp()
	{
		cal();
		cout<<"area="<<ar;
	}
};
void CIR::cal()
{
	ar=3.14*r*r;
}
void main()
{
	clrscr();
	CIR obj;
	void (CIR::*ptr)(void)=&CIR::disp;
	int CIR :: *PR = &CIR::r;
	obj.*PR=5;    //obj.r=5;
	(obj.*ptr)();
}