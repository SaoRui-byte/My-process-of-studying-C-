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

int getListItemByIndex(const list<int>& l,int index)
{
	list<int>::const_iterator it = l.begin();
	while (index)
	{
		it++;
		index--;
	}
	return *it;

}

int main()
{
	list<int> l = { -1,9,8,5,2,1,1,-1 };
	//l[4];  这是错误的,at也不对，无法进行随机访问,只能通过迭代器的方式,自己封装函数
	list<int>::iterator it = l.begin();
	it++;
	//it = it+1 这样不对，因为无法判断后面加的是多少，太大效率太低

	cout << getListItemByIndex(l, 4) << endl;
	//支持直接看头尾元素
	cout << l.front() << endl;
	cout << l.back() << endl;
	return 0;
}