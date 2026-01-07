#include<iostream>
using namespace std;

template<typename T>
T add(T a, T b)
{
	T c = a + b;
	return c;
}
int main()
{
	int a = 1, b = 2,c;
	double aa = 1.11, bb = 2.22, cc;
	char aaa = 'a', bbb = 'b', ccc;
	c = add(a, b); //自动推导类型
	cout << c << endl;

	//显示指定类型
	c = add<int>(a, b);
	cout << c << endl;

	ccc = add(aaa, bbb);
	cout << sizeof(ccc) << endl;  //转化成asc码相加，对应的字符

	return 0;
}