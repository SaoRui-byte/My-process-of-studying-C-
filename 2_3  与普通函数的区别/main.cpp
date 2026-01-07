#include<iostream>
using namespace std;
int addInt(int a, int b)
{
	return a + b;
}
double addDouble(double a, double b)
{
	return a + b;
}


template <typename T>
T add(T a, T b)
{
	T c = a + b;
	return c;
}
int main()
{
	//普通函数会发生隐式转换
	int a = 1; int b = 2;
	double d = 2.5;
	double c = addDouble(a, b);
	cout << c << endl;
	//c = add(a, d); //自动推导类型不会进行隐式转换
	int e = add<int>(a, d);
	c = add<double>(a, d);//显示指定类型的隐式类型转换
	cout << e << endl;
	cout << c << endl;

	return 0;
}