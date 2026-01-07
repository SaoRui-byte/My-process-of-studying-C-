#include<iostream>
using namespace std;
/*
并不会进行覆盖


*/
class Animal
{
public:
	Animal()
	{
		m_Data = 1;
	}
	int m_Data;
};

class Cat : public Animal
{
public:
	Cat()
	{
		m_Data = 2;
	}
	int m_Data;
};
void test()
{
	Cat c;
	cout << c.m_Data << endl;
	cout << c.Animal::m_Data << endl;  //表明一个作用域就好了
	//:: 是作用域解析符，其左侧必须是类名、命名空间或为空（表示全局作用域），用于限定右侧成员的归属。
	//格式为：对象.基类名::成员
}
int main()
{

	test();
	return 0;
}