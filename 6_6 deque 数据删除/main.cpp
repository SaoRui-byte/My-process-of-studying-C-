#include<iostream>
#include<deque>

using namespace std;

void printDeque(deque<int>& d)
{
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << ' ';
	}
	cout << endl;
}
/*
1.pop_front
2.pop_back
3.erase、clear

*/

int main()
{
	deque<int> d = { -1,9,8,5,2,1,1,-1 };
	d.pop_back();
	d.pop_front();
	printDeque(d);

	deque<int>::iterator iter = d.erase(d.begin() + 2);  //迭代器向后挪动一位,可以下次继续调用
	printDeque(d);
	d.erase(d.begin() + 1, d.begin() + 3);
	printDeque(d);

	d.clear(); //全部清掉了
	printDeque(d);
	return 0;
}