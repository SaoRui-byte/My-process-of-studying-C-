#include<iostream>
#include<deque>

using namespace std;

void printDeque(deque<int>& d)
{
	for (deque<int>::iterator iter = d.begin(); iter != d.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;
}

/*
1.empty()
2.size
3.resize

*/

int main()
{
	deque<int> d;
	cout << "d.empty():" << d.empty() << endl;

	d.resize(18); // 默认补的是0
	d.resize(20, 6); //指定补充的是6
	return 0;
}