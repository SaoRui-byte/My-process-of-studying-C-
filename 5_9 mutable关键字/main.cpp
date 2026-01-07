#include<iostream>
using namespace std;

//mutable  <-> 与const相对
class Hero
{
public:
	Hero():m_Hp(0),getHpCounter(0){}
	int getHp() const
	{
		getHpCounter++;
		return m_Hp;
	}
	void printCounter() const
	{
		cout << "Counter:" << getHpCounter << endl;
	}
private:
	int m_Hp;
	mutable int getHpCounter; //定义时加个mutable让他可变
};
int main()
{
	Hero h;
	int i = 0;
	while (i < 6)
	{
		h.getHp();
		i++;
	}
	h.printCounter();
	return 0;
}