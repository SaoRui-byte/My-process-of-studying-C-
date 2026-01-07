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
		{1,4},
		{3,30},
		{2,80},
		{4,90}
	};

	for (int i = -1; i < 3; i++)
	{
		cout << i << "的出现次数是" << m.count(i) << endl;
	}

	//multimap 里键可以是重复的多个  multimap：不支持 operator[]
	//equal_range(key) 是 multimap 专门为处理重复键设计的成员函数，它直接返回一个 迭代器对（std::pair<iterator, iterator>）
	//表示 “所有键等于 key 的元素” 所在的 左闭右开区间
	printMap(m);
	return 0;
}