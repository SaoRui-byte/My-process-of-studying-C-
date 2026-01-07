#include<iostream>
#include<unordered_set>
using namespace std;

void printUSet(const unordered_set<int>& s)
{
	for (auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	unordered_set<int> s = { 1,2,3,4,5 };
	auto it = s.find(3);
	if (it != s.end())
	{
		cout << "找到了"<<endl;
	}

	it = s.find(10);
	if (it == s.end())
	{
		cout << "没有找到";
	}
	return 0;
}