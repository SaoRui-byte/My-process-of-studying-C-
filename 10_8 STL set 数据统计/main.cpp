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
	set<int> s = { 1,2,3,4,5 };
	cout << s.count(1) << endl;; //这个是元素1的个数，只能是1，0 ,set里可以当has用
	multiset<int> ms = { 1,1,1,2,2,3,3,4,4,5,5,5,5,5,5,6 };
	cout << ms.count(5) << endl; // 5个个数，对multiset有用
	return 0;
}