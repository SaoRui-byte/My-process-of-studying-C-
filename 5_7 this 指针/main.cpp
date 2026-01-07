#include<iostream>
using namespace std;
/*
this 指针
1.解决命名冲突
2.*this 就可以获取到这个对象本身了

this		*this
&h			h

*/

class Hero
{
public:
	Hero(int hp)
	{
		this->hp = hp; //this指向这个对象的指针
		//(*this)可以去对象本身
	}
	int hp;  //当形参和成员变量重名的时候，成员变量被隐藏掉了，被形参覆盖了
};

int main()
{
	Hero h(100);
	cout << h.hp << endl;
	return 0;
}