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
1.pop_front
2.pop_back
3.erase,clear
*/

int main()
{
	list<int> l = {-1,9,8,5,2,1,1,-1};
	l.pop_back();
	printList(l);
	l.pop_front();
	printList(l);


	//1.erase(迭代器)  返回迭代器的下一个
	list<int>::iterator it = l.erase(l.begin()); //删掉，迭代器指向下一个位置
	printList(l);
	cout << *it << endl;
	it = l.erase(it);

	//2.erase()传入一个迭代器区间
	l.erase(it, l.end());
	printList(l);

	//3.全部删掉
	l.clear();
	printList(l);

	return 0;
}