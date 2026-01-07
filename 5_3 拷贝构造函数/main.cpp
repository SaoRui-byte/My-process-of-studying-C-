#include<iostream>
using namespace std;
/*
拷贝构造函数的定义：
类名（const 类型& 变量名）
{

}
*/
class Hero
{
public:
	Hero()
	{
		m_Hp = 100;
		cout << "Hero默认构造函数调用完毕!" << endl;
	}
	Hero(int hp)
	{
		m_Hp = hp;
		cout << "Hero 有参构造函数调用完毕!" << endl;
	}
	Hero(const Hero& h) //const确保传进来的变量不会改变
	{
		m_Hp = h.m_Hp;
		cout << "Hero 拷贝构造函数调用完毕!" << endl;
	}


	~Hero()
	{
		cout << "Hero默认构造函数调用完毕!" << endl;
	}
private:
	int m_Hp;

};
/*
拷贝构造函数的调用时机：
1.用已经创建的对象来初始化对象
2.函数的传参
3.函数的返回值
*/

//1.用已经创建的对象来初始化对象
void func1()
{
	cout << "----------func1----------" << endl;;
	Hero h1(20);
	Hero h2(h1);
}
//2.函数的传参
void test1(Hero h)
{

}
void test2(Hero* h)
{

}
void func2()
{
	cout << "----------func2----------" << endl;;
	Hero h1;
	test1(h1);
	test2(&h1); //传入指针不会被调用，指针就是传进来地址，不会生成新对象。
}
//3.函数的返回值
Hero test3()
{
	Hero h(40);
	return h;
}
void func3()
{
	cout << "----------func3----------" << endl;;
	Hero h = test3();
}

int main()
{
	func1();
	func2();
	func3();//理论上应该能调用到，是因为编译器进行了优化。
	return 0;
}