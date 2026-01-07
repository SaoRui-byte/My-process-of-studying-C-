#include<iostream>
#include<deque>
using namespace std;
//d.assign({...})：对象已创建（可能为空或有内容），后续修改其内容。
template<typename T>
void printDeque(deque<T>& d)
{
	for (typename deque<T>::iterator iter = d.begin(); iter != d.end(); iter++)  //要显示指明这是一个类型,不是一个成员变量
	{
		cout << *iter << ' ';
	}
	cout << endl;
}

int main()
{
	deque<int> d = { 9,8,5,2,1,1 };
	cout << "d:";
	printDeque(d);

	//1. = 赋值
	deque<int> d1;
	d1 = d;

	//2.assign(迭代器)
	deque<int> d2;
	d2.assign(d1.begin()+1, d1.end());

	//3.初始化列表
	deque<int> d3;
	d3.assign({ 1,2,3,5,6,7 });
	printDeque(d3);

	//4.初始化a个b
	deque<int> d4;
	d4.assign(8, 6);

	return 0;
}