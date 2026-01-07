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
	m[1] = 20;
	//直接中括号修改
	//还可以直接执行++操作
	return 0;
}