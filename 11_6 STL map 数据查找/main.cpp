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
		{3,20},
		{2,80},
		{4,50}
	};

	for (int i = 4; i <= 5; i++)
	{
		map<int, int>::iterator it = m.find(i);  //.find()参数是键的类型
		if (it != m.end())
		{
			cout << "找到键值对:(" << it->first << ',' << it->second<<")" << endl;
		}
		else
		{
			cout << "未找到键:" << i << endl;
		}
	}

	return 0;
}