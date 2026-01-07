#include<iostream>
#include<unordered_set>
using namespace std;

void printUSet(const unordered_set<int>& s)
{
	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//无序集合,只在意在不在，不需要在意顺序
int main()
{
	unordered_set<int> s = { 9,8,5,2,1,1 };
	printUSet(s);

	//1. = 对象
	unordered_set<int> s1;
	s1 = s;
	printUSet(s1);

	//2.初始化列表
	unordered_set<int> s2;
	s2 = { 3,4,5,3,12,1,23 };
	printUSet(s2);

	return 0;
}