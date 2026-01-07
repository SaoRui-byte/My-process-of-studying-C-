#include<iostream>
using namespace std;
//用virtual关键字声明，派生类可重写（函数签名必须完全一致）
//函数名、参数列表（类型、个数、顺序）、const 修饰 完全一致；
//返回值通常也需一致，除非是协变指针 / 引用（高级用法，基础阶段可忽略）。
class Animal
{
public:
	virtual void eat() //子函数会直接覆盖掉父类的虚函数
	{
		cout << "动物在吃东西" << endl;
	}
	virtual void run()
	{
		cout << "动物在跑" << endl;
	}
};

class Cat :public Animal
{
public:
	void eat()
	{
		cout << "猫在吃东西" << endl;
	}
};
void eat(Animal& a) //a是Cat对象的基类引用（派生类对象可隐式转换为基类引用）。
{
	Animal b;
	a.eat();
}

void Test()
{
	Cat c;
	eat(c);
	cout << "Animal's size = " << sizeof(Animal) << endl;
	//指针所占字节（64位系统，32位系统为4）
}
int main()
{
	Test();
	return 0;
}