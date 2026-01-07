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

int main()
{
	//.count()统计出现次数,set可以当成has，multiset会统计出现的次数
	unordered_set<int> s = { 1,2,3,4,5 };

	return 0;
}