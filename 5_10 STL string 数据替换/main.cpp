#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s = "Hello woooorld";
	//1.
	/*s.replace(7, 5, "or");*/  //从第七个位置开始，后面5个元素替换成or
	
	//2.
	s.replace(s.begin() + 7, s.begin() + 12, "or");//迭代器都是左闭右开
	cout << s << endl;

	//3.
	s = "Hello woooorld";
	s.replace(s.begin() + 7, s.begin() + 12, "orjhsakfhkjsdak", 2);
	cout << s << endl;//取字符串的前两个


	return 0;
}