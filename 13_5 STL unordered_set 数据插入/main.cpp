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
	//1.insert()插入
	unordered_set<int> s;
	s.insert(3);
	s.insert(1);
	s.insert(2);
	s.insert(5);
	s.insert(4);
	printUSet(s);

	//也可以插入vector数组的迭代器
	vector<int> v = { 1,9,9,7 };
	s.insert(v.begin(), v.end());
	printUSet(s);


	return 0;
}