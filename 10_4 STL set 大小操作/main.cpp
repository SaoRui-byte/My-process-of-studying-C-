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
	set<int> s1;
	cout << s1.empty() <<"  "<< s1.size() << endl;

	set<int> s2 = {1,1,1,6,7,8,9};  //size是最终剩下的大小
	cout << s2.empty() << "  " << s2.size() << endl;
	return 0;
}