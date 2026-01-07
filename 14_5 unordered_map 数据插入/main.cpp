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
	//insert()
	unordered_map<int, int> m;
	m.insert({ 1,10 });
	//make_pair(3,20) //自动转换类型
	 
	//3
	m.insert(unordered_map<int, int>::value_type(4, 7));
	printUMap(m);

	//4.更常用[]
	m[14] = 18;  // 重复的键会插入成功，进行修改
	//insert()不会修改，插入失败

	//7.
	m[0];  //不赋值也会去生成一个默认的值为0
	return 0;
}