#include <iostream>
using namespace std;
//类里面的定义函数的方法，C++里struct是类的一种
//函数名：必须和类名完全相同（包括大小写）。
//返回值：没有返回值，也不能写 void（这是语法规定）。
//调用时机：创建对象时自动调用，无需手动调用。
struct Info
{
	char _name[20];
	int _role;
	union
	{
		double score;
		char course[20];
	}_sc;
	Info(const char name[20], int role, double s, const char c[20])
//联合体（union）特性：所有成员共享同一块内存，必须手动初始化其中一个成员（否则行为未定义）。
	{
		strcpy_s(_name, name);
		_role = role;
		if (s > 0) _sc.score = s;
		if (strlen(c) > 0) strcpy_s(_sc.course, c);
	}
};

int main()
{

	
	return 0;
}