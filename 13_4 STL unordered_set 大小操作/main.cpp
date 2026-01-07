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
	unordered_set<int> s1;
	//1.empty()
	//2.size()
	return 0;
}