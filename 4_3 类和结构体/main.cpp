#include<iostream>
using namespace std;

/*
struct && class

struct 默认是公共的
class  默认是私有的
*/
class C 
{
	int m_a;
};
struct S
{
	int m_a;
	void func()
	{
		m_a = 666;  //C++里的struct里可以定义函数，C里不可以
	}
};
int main()
{
	C c;
	S s;


	return 0;
}