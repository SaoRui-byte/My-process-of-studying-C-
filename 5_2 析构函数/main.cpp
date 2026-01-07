#include <iostream>
using namespace std;
//析构函数
//1.函数名称和类名一致，并且在最前面加一个~
//2.函数返回值不需要写
//3.不能有参数
class Hero
{
public:
	//构造函数
	Hero()
	{
		cout << "Hero默认构造函数调用完毕!" << endl;
	}
	//前面加一个~
	~Hero()
	{
		cout << "Hero析构函数调用完毕!" << endl;
	}

};
void test()
{
	Hero h;
}
int main()
{
	test();
	Hero h;
	int a;
	cin >> a;
	return 0;
}