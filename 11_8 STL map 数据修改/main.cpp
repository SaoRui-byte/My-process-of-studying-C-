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
	m.insert({ 1,20 });
	m.insert({ 2,34 });
	m.insert({ 3,12 });
	m.insert({ 4,28 });
	printMap(m);

	//下表访问修改
	m[3] = 888;
	printMap(m);

	m[2]++; //支持++  可以直接对元素进行修改
	printMap(m);


	return 0;
}