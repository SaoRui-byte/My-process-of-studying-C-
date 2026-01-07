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
	//1.empty()


	//2.size() 判断有多少键值对
	return 0;
}