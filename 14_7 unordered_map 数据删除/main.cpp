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
	m[1] = 5;
	m[2] = 3;
	m[4] = 9;
	m[5] = 9;

	//1.erase(键)
	m.erase(2);
	printUMap(m);

	//2.erase(迭代器)

	//3.删除一个区间
	m.erase(m.begin(), m.end());

	//4.clear()  全部删除
	return 0;
}