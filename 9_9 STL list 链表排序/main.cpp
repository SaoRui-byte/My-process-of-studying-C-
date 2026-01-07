#include<iostream>
#include<list>
using namespace std;

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin();it!=l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool cmp(int a, int b)  //返回值已经不重要了
{
	return a > b;
}

int main()
{
	list<int> l = { 4,2,6,5,3,1 };
	l.sort();//默认升序排列
	printList(l);

	l.sort(cmp); //需要传入函数
	printList(l);
	return 0;
}