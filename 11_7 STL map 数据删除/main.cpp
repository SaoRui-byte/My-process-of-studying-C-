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
	map<int, int> m = {
		{1,4},
		{2,50},
		{3,17},
		{4,98}
	};
	printMap(m);

	m.erase(1); // 传入的是键
	printMap(m);

	m.erase(m.begin());
	printMap(m);

	m.erase(m.begin(), m.end());
	printMap(m);

	//clear()全部删除
	return 0;
}