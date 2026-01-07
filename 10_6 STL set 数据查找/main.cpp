#include<iostream>
#include<set>
using namespace std;

void printSet(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

int main()
{
	set<int> s = { 1,2,3,4,5,5,6 };
	auto it = s.find(3);
	if (it != s.end())
	{
		cout << "ур╣╫ак" << endl;
	}


	return 0;
}