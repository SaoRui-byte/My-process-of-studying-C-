#include<iostream>
using namespace std;

class complex
{
public:
	double a;
	double b;

public:
	complex(double a,double b)
	{
		this->a = a;
		this->b = b;
	}

	void printComplex_()
	{
		if (b == -1)
		{
			cout << a << '+' << 'i' << endl;
		}
		else if (b == 1)
		{
			cout << a << '-' << 'i' << endl;
		}
		else if (b > 0)
		{
			cout << a << -b << 'i' << endl;
		}
		else if (b < 0)
		{
			cout << a << '+' << -b <<'i'<< endl;
		}
	}

	complex operator+(complex& a)
	{
		complex c(this->a + a.a, this->b + a.b);
		return c;
	}

	complex operator*(complex& a)
	{
		complex c((this->a * a.a - this->b * a.b), (this->a * a.b + this->b * a.a));
		return c;
	}

	complex operator/(complex& x)
	{
		complex tmp(x.a, -x.b);
		double fm = (x.a * x.a) + (x.b * x.b);
		complex fz = *this * tmp;
		fz.a /= fm;
		fz.b /= fm;
		
		return fz;

	}


};

int main()
{
	complex a(1,-2),b(1,1),c(3,-1);
	a.printComplex_();
	b.printComplex_();
	c.printComplex_();

	(a + b).printComplex_();
	(a * b).printComplex_();
	(a / b).printComplex_();
	return 0;


}