#include<iostream>
#include<list>
using namespace std;

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)  //const的对象只能用const_iterator
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	//1.默认构造函数
	list<int> l1;
	cout << "l1:";
	printList(l1);

	//2.初始化列表
	list<int> l2_1 = { 9,8,7,6,5 };
	cout << "l2_1:";
	printList(l2_1);
	//这俩一样
	list<int> l2_2({ 9,8,7,6,1 });
	cout << "l2_2:";
	printList(l2_2);

	//3.迭代器
	list<int> l3(l2_1.begin(), l2_1.end());
	cout << "l3:";
	printList(l3);

	//4.全0初始化
	list<int> l4(8);
	cout << "l4:";
	printList(l4);

	//5.list<int> 变量名(a,b)  a个b
	list<int> l5(8, 6);
	cout << "l5:";
	printList(l5);

	//6.拷贝构造函数
	list<int> l6(l2_2);
	cout << "l6:";
	printList(l6);


	return 0;
}