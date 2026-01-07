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
1.push_front
2.push_back
3.insert  需要迭代器的位置
*/
int main()
{
	deque<int> d;
	d.push_front(-1);
	d.push_front(-2);
	d.push_front(-3);
	printDeque(d);

	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	printDeque(d);

	d.insert(d.begin(), 0);
	d.insert(d.end() - 1, 5, 8);  //插入5个8
	d.insert(d.begin() + 1, d.begin() + 4, d.begin() + 6);//在begin+1的地方插入begin+4到begin+6的元素值   （左闭右开）


	return 0;
}