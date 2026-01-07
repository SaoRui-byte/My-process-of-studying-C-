#include<iostream>
#include<string>
using namespace std;
class Hero
{
public:
	Hero()
	{
		m_Name = "英雄";
		m_Hp = 100;
	}
	~Hero()  //析构函数：1.动态分配的内存   2.文件 / 网络句柄（如 FILE* m_File;）
	{ }

	static int m_HeroCount;  //类内只能声明静态成员（写 static int m_HeroCount;），不能直接赋值
	//只声明，未分配内存	//定义和初始化必须放在类外（全局作用域，格式：int Hero::m_HeroCount = 100;）
private:
	string m_Name;
	int m_Hp;

};

int Hero::m_HeroCount = 100;  //作用域 类名::     ，真正分配内存并初始化 
int main()
{
	Hero h;
/*	cout << h.m_HeroCount << endl;*/ //从对象的身上去拿
	h.m_HeroCount = 101;
	cout << Hero::m_HeroCount << endl; //直接从类里拿
	return 0;
}
/*
总结：
静态成员变量的特点：
1.所有的对象共享同一份数据
2.编译阶段分配内存
3.需要在类中进行声明，在类外进行初始化
*/