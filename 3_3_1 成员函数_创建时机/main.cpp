#include<iostream>
using namespace std;

class Player
{
public:
	void run()
	{
		cout << "跑步" << endl;
	}
};
class Ball
{
public:
	void drop()
	{
		cout << "下落" << endl;
	}
};

template <class T>
class Test
{
	T obj;
public:   //编译的时候才调用，否则不知道类型会直接报错
	void move1()
	{
		obj.run();
	}
	void move2()
	{
		obj.drop();
	}
};
int main()
{
	Test<Player> test1;
	test1.move1();
	return 0;
}