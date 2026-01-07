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
1.empty
2.size
3.resize
*/

int main()
{
	list<int> l;
	cout << l.empty() << endl;
	cout << l.size() << endl;

	l = { 1,2,3 };
	cout << l.empty() << endl;
	cout << l.size() << endl;

	l.resize(18);  //不够补0
	cout << l.empty() << endl;
	cout << l.size() << endl;
	printList(l);

	l.resize(20, 6);  //多的补6
	cout << l.empty() << endl;
	cout << l.size() << endl;
	printList(l);

	l.resize(3); //把后面的删掉了
	cout << l.empty() << endl;
	cout << l.size() << endl;
	printList(l);

	return 0;
}