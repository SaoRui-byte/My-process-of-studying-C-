#include <iostream>
#include <string>
using namespace std;
//接口，方法，函数 是同一个概念
//1.可以控制读写权限
//2.可以检测数据的有效性
class Hero
{
public:   //用public,通过函数的方式来控制它的读写权限
	void SetName(string name)
	{
		m_Name = name;
	}
	string getName()
	{
		return m_Name;
	}
	void SetSpeed(int speed)
	{
		if (speed < 100 || speed>500)
		{
			cout << "速度设置不合法" << endl;
			return;
		}
	}
private:
	string m_Name;		//可读可写
	int m_SkillCount;	//只读  
	int m_Speed;		//只写

};

int main()
{
	Hero H;
	H.SetName("剑圣");
	cout << "英雄的名字叫:" << H.getName() << endl;
	return 0;
}