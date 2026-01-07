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
	map<int, int> m;

	//1.insert()
	m.insert(pair<int,int>(1, 10));
	printMap(m);

	//2.insert()
	m.insert(make_pair(3, 20));

	//3.
	m.insert(map<int, int>::value_type(2, 78));
	
	//4.下标插入，最常用
	m[4] = 6;
	m[9] = 1;
	printMap(m);
	//语法极简，但注意会自动创建不存在的键（可能误插入），而 insert 对已存在的键会插入失败（不覆盖）。  

	//5.   
	m.insert(pair<int,int>(3, 21));  //而 insert 对已存在的键会插入失败（不覆盖）。
	printMap(m);

	//6.
	m[3] = 22;
	printMap(m);

	//7.
	m[0]; //只要访问没有的，会自动创建，并且初始化为0
	printMap(m);

	return 0;
}