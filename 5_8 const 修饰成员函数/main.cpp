#include<iostream>
using namespace std;

//常函数
//格式    类型 函数名（） const{}
class Hero
{
public:
	Hero():m_Hp(0){}
	int getHp () const    //常函数无法修改成员变量的值
	{
		/*m_Hp++;*/
		return m_Hp;
	}
	int setHp(int hp)
	{
		m_Hp = hp;
	}
private:
	int m_Hp;

};
int main()
{
	const Hero h;  //对于常量对象，只能调用常函数
	h.getHp();
	//h.setHp(100);
	return 0;
}