#include<iostream>
using namespace std;
/*
<<
Complex c;
cout.operator<<(c)

//成员函数
c.operator<<(cout)
*/
int main()
{

	return 0;
}
/*
左移运算符（<<）的重载核心是：
通过全局函数实现，让左操作数为 ostream&（cout），右操作数为自定义对象。
函数内定义对象的输出格式，返回 ostream& 支持链式输出。
用 friend 声明让函数能访问类的私有成员。


*/