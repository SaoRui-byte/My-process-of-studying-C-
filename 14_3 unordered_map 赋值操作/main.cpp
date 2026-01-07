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
	unordered_map<int, int> m = { {1,2},{2,2},{4,2},{3,3} };
	printUMap(m);

	//1. = 对象
	unordered_map<int, int> m1;
	m1 = m;

	//2. 初始化列表
	unordered_map<int, int> m2;
	m2 = { {1,2},{2,5} };

	
	return 0;
}