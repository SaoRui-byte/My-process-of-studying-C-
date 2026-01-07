#include<iostream>
#include<list>
using namespace std;

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

/*
1.push_front
2.push_back
3.insert
*/
int main()
{
	list<int> l;
	l.push_front(-1);
	l.push_front(-2);
	l.push_front(-3);

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);

	printList(l);

	//insert
	//1.insert(迭代器，值)
	list<int>::iterator it = l.begin();
	it++;
	it++;
	it++;
	//it = it + 1;  链表不支持随机访问,迭代器不可以
	l.insert(it, 0);
	printList(l);

	//2.insert(迭代器，数量，值)
	it = l.end();
	it--;
	l.insert(it, 5, 8);
	printList(l);

	//3.insert(迭代器，迭代器的开始位置，迭代器的结束位置)
	it = l.begin();
	it++;
	l.insert(it, l.begin(), l.end());
	printList(l);
	return 0;
}