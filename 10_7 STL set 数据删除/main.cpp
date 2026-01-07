#include<iostream>
#include<set>
using namespace std;

void printSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	set<int> s = { 1,2,3,4,5,6 };
	auto rm = s.erase(3);  //返回的个数
	printSet(s);

	cout << rm << endl;
	auto it = s.find(4);  //迭代器
	if (it != s.end())
	{
		s.erase(it); //返回下一个有效的迭代器
	}
	printSet(s);

	s = { 1,2,3,4,5 };
	set<int>::iterator itl = s.find(2);
	set<int>::iterator itr = s.find(4);
	s.erase(itl, itr); // 删掉一个区间  左闭右开 删掉的迭代器就会失效
	printSet(s);
	return 0;
}