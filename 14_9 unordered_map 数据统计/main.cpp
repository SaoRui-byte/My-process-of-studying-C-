#include<iostream>
#include<unordered_map>
using namespace std;

void printUMap(const unordered_map<int, int>& m)
{
	for (unordered_map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " " << "value = " << it->second << endl;
	}
	cout << "--------------------------------" << endl;
}

int main()
{
	unordered_map<int, int> m;
	m[1] = 44;
	m[2] = 88;
	m[3] = 99;
	//count()方法
	unordered_multimap<int, int> um;   //multimap不能用[]访问 因为有重复
	um.insert({ 1, 2 });   // 插入键1、值2
	um.insert({ 1, 3 });   // 插入键1、值3（允许重复键）
	um.insert({ 2, 3 });   // 插入键2、值3

	/*
	方法：利用 equal_range（推荐）
	equal_range(key) 会返回一个 pair 迭代器，其中：
	pair.first：指向键等于 key 的第一个元素的迭代器；
	pair.second：指向键等于 key 的最后一个元素的下一个位置的迭代器。
	*/

	return 0;
}