#include<iostream>
using namespace std;

//函数模板
/*
语法：
template <typename T>   T可以自己命名
函数的定义
*/
template<typename T>
T add(T a, T b)
{
	T c = a + b;
	return c;
}
int main()
{

	return 0;
}