#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void eat() = 0;  //加上等于0变成纯虚函数了，只要有纯虚函数的类，叫抽象类，无法实例化对象。
/*
	virtual void eat()
	{

	}
	这样完全可行
*/
	
};
class Cat :public Animal
{
public:
	void eat()
	{
		cout << "猫在吃东西" << endl;
	}
};
int main()
{
	//Animal a;
	Cat c;
	c.eat();
	return 0;
}