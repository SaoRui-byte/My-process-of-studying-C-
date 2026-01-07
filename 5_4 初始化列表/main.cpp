#include<iostream>
#include<string>
using namespace std;
/*
初始化列表的语法
构造函数(传参1，传参2)：成员变量1（传参1），成员变量2（传参2）{}


*/
class Hero
{
public:
	//Hero(string name,int hp)
	//{
	//	m_Name = name;
	//	m_Hp = hp;
	//}
	Hero (string name,int hp,int speed):m_Name(name),m_Hp(hp),m_Speed(speed) //走的还是初始化逻辑
	{ }
	void Print()
	{
		cout << "英雄：" << m_Name << "的血量是" << m_Hp << ",速度是"<<m_Speed<<endl;
	}
private:
	string m_Name;
	int m_Hp;
	int m_Speed;
};
int main()
{
	Hero h("剑圣", 100,10);
	h.Print();
	return 0;
}
//构造函数体里的代码，是给 “已经构造好的成员” 赋值；但 const、引用、无默认构造的成员，必须在「构造阶段（进入体之前）」就完成初始化，否则连构造体都进不去。