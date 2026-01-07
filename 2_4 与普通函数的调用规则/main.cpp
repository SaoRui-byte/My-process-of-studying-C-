#include<iostream>
using namespace std;
int add(int a, int b)
{
	cout << "调用普通函数" << endl;
	return a + b;
}
template <typename T>
T add(T a, T b)
{
	cout << "调用函数模板" << endl;
	return a + b;
}
int main()
{
	int a = 1, b = 2;
	add(a, b);//优先调用普通函数，显示指定的话调用函数模板
	add<int>(a, b);//显示指定的话调用函数模板
	double aa = 1, bb = 2;
	add(aa, bb); //完美匹配才调用普通函数
	return 0;
}