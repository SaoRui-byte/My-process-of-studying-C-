#include<iostream>
#include<map>
using namespace std;

void printMap(const map<int, int>& m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout <<"key = "<< it->first <<" value = " << it->second << endl;
	}
	cout <<"-------------------------" << endl;
}
//map会主动按键的值来排序，升序排列
//string对象不可以直接*数字，与python不同，可以s1.append(n,s)追加n个s到s1后
int main()
{
	//1.默认构造函数
	map<int, int> m1;
	printMap(m1);

	//2.初始化列表
	map<int, int> m2_1 = {
		pair<int,int>(1,10),
		pair<int,int>(4,24),
		pair<int,int>(3,43),
		pair<int,int>(2,15)
	};

	map<int, int> m2_2({
	pair<int,int>(1,10),
	pair<int,int>(4,24),
	pair<int,int>(3,43),
	pair<int,int>(2,15)
	}); //与上面的一样
	//在 C++11 及以上标准中，map 的初始化不需要显式构造 pair，可以用更简洁的 {键, 值} 形式直接初始化
	printMap(m2_2);
	printMap(m2_1);

	//3.迭代器
	map<int, int> m3(m2_1.begin(), m2_1.end());
	printMap(m3);

	//4.拷贝构造
	map<int, int> m4(m2_2); //传入类型相同的map对象
	printMap(m4);


	return 0;
}