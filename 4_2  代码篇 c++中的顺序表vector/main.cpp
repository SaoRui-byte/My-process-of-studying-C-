#include<iostream>
#include<vector>
using namespace std;
//vector是模板类

int main()
{
	vector<int> ret = {1,2,3,4,5}; //生成一个顺序表
	cout << ret.size() << endl;
	ret.push_back(1024);// 插入到尾部
	cout << ret.size() << endl;
	cout << ret[0] << endl;
	return 0;
}
/*
功能			方法 / 操作
初始化			vector<T> v(...)
访问元素		v[i]、v.at(i)、v.front()、v.back()
尾部增减		push_back(val)、pop_back()
任意位置增删	insert(pos, val)、erase(pos)
清空 / 重置		clear()、resize(n)、assign(n, val)
容量管理		size()、capacity()、reserve(n)、empty()
遍历			迭代器、范围 for 循环
交换 / 赋值		swap(v2)、v1 = v2

begin()：指向第一个元素的迭代器。
end()：指向最后一个元素后一位的迭代器（作为结束标志）。
rbegin()/rend()：反向迭代器（从尾部遍历）。
*/