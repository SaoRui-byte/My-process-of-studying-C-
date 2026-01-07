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
	//1. 默认构造函数
	unordered_map<int, int> m1;
	cout << "m1:" << endl;
	printUMap(m1);

	//2.初始化列表
	unordered_map<int, int> m2_1 = {{1,10},{4,24},{3,12},{2,15}};
	printUMap(m2_1);

	unordered_map<int, int> m2_2 ({ {1,10},{4,24},{3,12},{2,15} });
	printUMap(m2_2);


	//3.迭代器
	unordered_map<int, int> m3(m2_1.begin(), m2_1.end());
	
	//4.拷贝构造
	unordered_map<int, int> m4(m3);

	return 0;
}