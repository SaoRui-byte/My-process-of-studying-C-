#include<iostream>
#include<string>
using namespace std;
/*
静态成员函数:
1.所有对象共享函数
2.静态成员函数只能使用静态成员变量,无法使用普通成员变量
*/
class Hero
{
public:
	Hero()
	{
		m_Name = "英雄";
		m_Hp = 100;
	}
	static int m_HeroCount;
	static int GetHeroCount()  //也有访问权限
	{
		return m_HeroCount;
	}

private:
	string m_Name;
	int m_Hp;
};

int Hero::m_HeroCount = 100;

int main()
{
	Hero h;
	cout << h.GetHeroCount() << endl;
	cout << Hero::GetHeroCount() << endl;
	return 0;
}