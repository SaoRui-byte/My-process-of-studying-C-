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

int main()
{
	list<int>l = { 1,2,3 };
	//有这个反转函数
	l.reverse();
	printList(l);

	return 0;

}


