#include<iostream>
#include<deque>
using namespace std;

void printDeque(deque<int>& d)
{
	for (deque<int>::iterator iter = d.begin(); iter != d.end(); iter++)
	{
		cout << *iter << ' ';
	}
	cout << endl;

}

int main()
{
	//1.默认构造函数 空的
	deque<int> d1;
	cout << "d1: ";
	printDeque(d1);

	//2.初始化列表
	deque<int> d2_1({ 9,8,8,6,5 });
	cout << "d2_1:";
	printDeque(d2_1);
	deque<int> d2_2 = { 1,8,8,7,5 };  //和括号一摸一样，初始化
	cout<<"d2_2:";
	printDeque(d2_2);

	//3.迭代器
	deque<int> d3(d2_1.begin()+1,d2_1.end()-1);
	deque<int> d4(d3);
	printDeque(d4);

	//4.全0的初始化
	deque<int> d5(10);  //指定了长度为10，默认为0

	//5.deque<类型> 变量名(a,b)
	deque<int> d6(8, 6); //申请a个元素空间，每个元素初始化为b；
	printDeque(d6);

	//6.拷贝构造函数
	deque<int> d7(d3);

	
	return 0;
}