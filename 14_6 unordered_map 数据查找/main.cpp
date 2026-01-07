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
	m[1] = 1;
	m[2] = 3;
	m[3] = 6;
	m[666] = 886;
	for (int i = 1; i <= 4; i++)
	{
		auto it = m.find(i);
		if (it != m.end())
		{
			cout << "找到键值对"<<endl;
		}
		else
		{
			cout << "未找到键"<<endl;
		}

	}
	//[]不能作为查找的依据
	return 0;
}