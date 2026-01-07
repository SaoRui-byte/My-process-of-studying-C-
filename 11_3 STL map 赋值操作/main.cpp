#include<iostream>
#include<map>
using namespace std;

void printMap(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << it->first << "    " << it->second << endl;
	}
	cout << "------------------------------" << endl;
}

int main()
{
	map<int, int> m = {
		{1,10},
		{4,24},
		{3,43},
		{2,15}
	}; //注意用pair初始化是pair(a,b)   直接初始化是{a,b}
	/*
pair(1,10) 是调用 pair 构造函数（C++98 就支持，合法）。
map 初始化用 (1,10) 时，括号会被解析为逗号表达式（结果是 10，而非 pair），导致类型不匹配报错。
C++11 及更高版本中，map 用 {1,10} 会自动转为 pair（支持 “列表初始化” 语法）。
	*/
	printMap(m);

	//1.直接赋值 = 对象
	map<int, int> m1;
	m1 = m;
	printMap(m1);

	//2.初始化列表
	map<int, int> m2;
	m2 = {
		{1,8},
		{4,36},
		{3,18},
		{2,22}
	};
	printMap(m2);


	return 0;
}